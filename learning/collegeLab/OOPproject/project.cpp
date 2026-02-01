#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <limits> // Required for numeric_limits

using namespace std;

// Forward declaration
class Product;

// ----------------------------------------------------
// CLASS: Product
// ----------------------------------------------------
class Product
{
private:
    int p_id;
    string name;
    double price;
    int quantity;
    int seller_id;
    static int gen_pid;

public:
    Product(string n, double p, int q, int sid)
    {
        p_id = gen_pid++;
        name = n;
        price = p;
        quantity = q;
        seller_id = sid;
    }

    int getId() const { return p_id; }
    string getName() const { return name; }
    double getPrice() const { return price; }
    int getQty() const { return quantity; }
    int getSellerId() const { return seller_id; }

    bool reduceStock(int count)
    {
        if (quantity >= count)
        {
            quantity -= count;
            return true;
        }
        return false;
    }

    void showProduct(bool showSellerID = false) const
    {
        cout << "ID: " << p_id
             << " | " << left << setw(20) << name
             << " | Price: $" << setw(8) << price
             << " | Qty: " << quantity;

        if (showSellerID)
            cout << " | Seller ID: " << seller_id;

        cout << endl;
    }
};

// Initialize Product IDs to start at 5001
int Product::gen_pid = 5001;

// ----------------------------------------------------
// CLASS: User (Abstract Base)
// ----------------------------------------------------
class User
{
protected:
    int u_id;
    string name;
    static int gen_uid;

public:
    User(string n)
    {
        u_id = gen_uid++;
        name = n;
    }
    virtual ~User() {}

    int getId() const { return u_id; }
    string getName() const { return name; }

    // Pure Virtual Function
    virtual void userMenu(map<int, Product *> &inventory) = 0;

    void showDetails() const
    {
        cout << "ID: " << u_id << " | Name: " << name;
    }
};

// Initialize User IDs to start at 2001
int User::gen_uid = 2001;

// ----------------------------------------------------
// CLASS: Seller
// ----------------------------------------------------
class Seller : public User
{
public:
    Seller(string n) : User(n) {}

    void userMenu(map<int, Product *> &inventory) override
    {
        while (true)
        {
            cout << "\n=== SELLER DASHBOARD (" << name << ") ===" << endl;
            cout << "1. Add New Product" << endl;
            cout << "2. View My Inventory (Check Sales)" << endl;
            cout << "3. Logout" << endl;
            cout << "Enter Choice: ";

            int choice;
            if (!(cin >> choice))
            {
                cout << "Invalid input." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (choice == 1)
            {
                string p_name;
                double p_price;
                int p_qty;

                cout << "Product Name: ";
                cin.ignore(); // Clear buffer
                getline(cin, p_name);

                cout << "Price: $";
                cin >> p_price;

                cout << "Quantity: ";
                cin >> p_qty;

                Product *newP = new Product(p_name, p_price, p_qty, this->u_id);
                inventory[newP->getId()] = newP;

                cout << ">> Product Listed Successfully! ID: " << newP->getId() << endl;
            }
            else if (choice == 2)
            {
                cout << "\n--- MY INVENTORY ---" << endl;
                bool found = false;
                for (auto const &[key, val] : inventory)
                {
                    if (val->getSellerId() == this->u_id)
                    {
                        val->showProduct();
                        found = true;
                    }
                }
                if (!found)
                    cout << "(No products listed yet)" << endl;
                else
                    cout << ">> Note: If Quantity is lower than initial, items were sold." << endl;
            }
            else if (choice == 3)
                break;
            else
                cout << "Invalid choice." << endl;
        }
    }
};

// ----------------------------------------------------
// CLASS: Buyer (Updated with Recharge)
// ----------------------------------------------------
class Buyer : public User
{
private:
    double wallet;

public:
    Buyer(string n, double money) : User(n)
    {
        wallet = money;
    }

    void userMenu(map<int, Product *> &inventory) override
    {
        while (true)
        {
            cout << "\n=== BUYER DASHBOARD (" << name << ") ===" << endl;
            cout << "Current Balance: $" << wallet << endl;
            cout << "1. View Marketplace" << endl;
            cout << "2. Buy Product" << endl;
            cout << "3. Recharge Wallet" << endl; // <--- NEW OPTION
            cout << "4. Logout" << endl;
            cout << "Enter Choice: ";

            int choice;
            if (!(cin >> choice))
            {
                cout << "Invalid input." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (choice == 1)
            {
                cout << "\n--- MARKETPLACE ---" << endl;
                bool found = false;
                for (auto const &[key, val] : inventory)
                {
                    if (val->getQty() > 0)
                    {
                        val->showProduct(true);
                        found = true;
                    }
                }
                if (!found)
                    cout << "Market is empty or sold out!" << endl;
            }
            else if (choice == 2)
            {
                int pid;
                cout << "Enter Product ID to Buy: ";
                cin >> pid;

                if (inventory.find(pid) != inventory.end())
                {
                    Product *p = inventory[pid];
                    if (p->getQty() <= 0)
                        cout << ">> Error: Product Out of Stock!" << endl;
                    else if (wallet < p->getPrice())
                        cout << ">> Error: Insufficient Funds! Please Recharge." << endl;
                    else
                    {
                        p->reduceStock(1);
                        wallet -= p->getPrice();
                        cout << ">> SUCCESS! You bought " << p->getName() << "." << endl;
                        cout << ">> New Balance: $" << wallet << endl;
                    }
                }
                else
                    cout << ">> Error: Product ID not found." << endl;
            }
            else if (choice == 3) // <--- NEW LOGIC
            {
                double amount;
                cout << "Enter Amount to Add: $";
                cin >> amount;

                if (amount > 0)
                {
                    wallet += amount;
                    cout << ">> Deposit Successful! New Balance: $" << wallet << endl;
                }
                else
                {
                    cout << ">> Error: Amount must be positive." << endl;
                }
            }
            else if (choice == 4)
                break;
            else
                cout << "Invalid choice." << endl;
        }
    }
};

// ----------------------------------------------------
// MAIN SYSTEM LOGIC
// ----------------------------------------------------
int main()
{
    map<int, User *> users;
    map<int, Product *> products;

    cout << "=== ADVANCED E-COMMERCE SYSTEM ===" << endl;

    // PRE-LOADED DATA (For quick testing)
    Seller *s1 = new Seller("Tech World Inc");
    users[s1->getId()] = s1;
    products[5001] = new Product("Gaming Laptop", 1200.0, 5, s1->getId());
    products[5002] = new Product("Wireless Mouse", 25.0, 10, s1->getId());

    Buyer *b1 = new Buyer("John Doe", 3000.0);
    users[b1->getId()] = b1;

    int choice;
    while (true)
    {
        cout << "\n---------------- MAIN MENU ----------------" << endl;
        cout << "1. Register as Seller" << endl;
        cout << "2. Register as Buyer" << endl;
        cout << "3. LOGIN" << endl;
        cout << "4. Exit System" << endl;
        cout << "Enter Choice: ";

        if (!(cin >> choice))
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1)
        {
            string n;
            cout << "Enter Seller Name (e.g. Best Buy): ";
            cin.ignore();
            getline(cin, n);

            User *newUser = new Seller(n);
            users[newUser->getId()] = newUser;

            // --- REGISTRATION RECEIPT ---
            cout << "\n***********************************" << endl;
            cout << "  SELLER REGISTRATION SUCCESSFUL!" << endl;
            cout << "  Name: " << newUser->getName() << endl;
            cout << "  YOUR LOGIN ID: " << newUser->getId() << "  <-- (USE THIS TO LOGIN)" << endl;
            cout << "***********************************\n"
                 << endl;
        }
        else if (choice == 2)
        {
            string n;
            double w;
            cout << "Enter Buyer Name (e.g. John Smith): ";
            cin.ignore();
            getline(cin, n);

            cout << "Initial Wallet Deposit: $";
            cin >> w;

            User *newUser = new Buyer(n, w);
            users[newUser->getId()] = newUser;

            // --- REGISTRATION RECEIPT ---
            cout << "\n***********************************" << endl;
            cout << "  BUYER REGISTRATION SUCCESSFUL!" << endl;
            cout << "  Name: " << newUser->getName() << endl;
            cout << "  YOUR LOGIN ID: " << newUser->getId() << "  <-- (USE THIS TO LOGIN)" << endl;
            cout << "***********************************\n"
                 << endl;
        }
        else if (choice == 3)
        {
            int loginId;
            cout << "Enter Your User ID: ";
            cin >> loginId;

            if (users.find(loginId) != users.end())
            {
                // Polymorphism: Launches the correct menu based on user type
                users[loginId]->userMenu(products);
            }
            else
            {
                cout << ">> Error: User ID " << loginId << " not found!" << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "System Shutdown..." << endl;
            break;
        }
        else
        {
            cout << "Invalid Option!" << endl;
        }
    }

    // Cleanup Memory
    for (auto const &[key, val] : users)
        delete val;
    for (auto const &[key, val] : products)
        delete val;

    return 0;
}