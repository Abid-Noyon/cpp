Here are the 20 separate C++ programs corresponding to your lab list questions.Each program is complete and ready to run.

    ## #1. Program to implement all string operations(Length, Concatenate, Copy, Compare)



```cpp
#include <iostream>
#include <cstring>
    using namespace std;

int main()
{
    char str1[100], str2[100], temp[100];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // 1. Length
    cout << "Length of String 1: " << strlen(str1) << endl;

    // 2. Copy
    strcpy(temp, str1);
    cout << "String 1 copied to Temp: " << temp << endl;

    // 3. Concatenate
    strcat(str1, str2);
    cout << "Concatenated String: " << str1 << endl;

    // 4. Compare
    int result = strcmp(temp, str2);
    if (result == 0)
        cout << "Original String 1 and String 2 are equal." << endl;
    else
        cout << "Original String 1 and String 2 are not equal." << endl;

    return 0;
}

```

    ## #2. Program to replace a substring into a text



```cpp
#include <iostream>
#include <string>
    using namespace std;

int main()
{
    string text, oldSub, newSub;

    cout << "Enter the main text: ";
    getline(cin, text);
    cout << "Enter substring to replace: ";
    getline(cin, oldSub);
    cout << "Enter new substring: ";
    getline(cin, newSub);

    size_t pos = text.find(oldSub);
    if (pos != string::npos)
    {
        text.replace(pos, oldSub.length(), newSub);
        cout << "New Text: " << text << endl;
    }
    else
    {
        cout << "Substring not found!" << endl;
    }

    return 0;
}

```

    ## #3. Program to delete a substring from a text



```cpp
#include <iostream>
#include <string>
    using namespace std;

int main()
{
    string text, sub;

    cout << "Enter the main text: ";
    getline(cin, text);
    cout << "Enter substring to delete: ";
    getline(cin, sub);

    size_t pos = text.find(sub);
    if (pos != string::npos)
    {
        text.erase(pos, sub.length());
        cout << "Text after deletion: " << text << endl;
    }
    else
    {
        cout << "Substring not found!" << endl;
    }

    return 0;
}

```

    ## #4. Program to traverse an array



```cpp
#include <iostream>
    using namespace std;

int main()
{
    int n, arr[50];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Traversing Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

```

    ## #5. Program to insert an element into an array



```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[50], n, pos, val;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    // Shift elements to the right
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++; // Increase size

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

```

    ## #6. Program to delete an element from an array



```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[50], n, pos;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter index to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    if (pos >= 0 && pos < n)
    {
        // Shift elements to the left
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease size

        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    else
    {
        cout << "Invalid Position!" << endl;
    }

    return 0;
}

```

    ## #7. Program to search an element using Linear Search



```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[50], n, item, i;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> item;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found." << endl;

    return 0;
}

```

    ## #8. Program to search an element using Binary Search



```cpp
#include <iostream>
#include <algorithm> // for sort
    using namespace std;

int main()
{
    int arr[50], n, item, low, high, mid;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements (will be sorted automatically): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n); // Binary search requires sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Enter element to search: ";
    cin >> item;

    low = 0;
    high = n - 1;
    bool found = false;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == item)
        {
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element not found." << endl;

    return 0;
}

```

    ## #9. Program to sort an array using Bubble Sort



```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[50], n, temp;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Bubble Sort Logic
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

```

    ## #10. Program to sort an array using Quick Sort



```cpp
#include <iostream>
    using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[50], n;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

```

    ## #11. Program to multiply two matrices



```cpp
#include <iostream>
    using namespace std;

int main()
{
    int r1, c1, r2, c2, a[10][10], b[10][10], mult[10][10];

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> a[i][j];

    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> b[i][j];

    // Initializing result matrix to 0
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            mult[i][j] = 0;

    // Multiplying
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                mult[i][j] += a[i][k] * b[k][j];

    cout << "Output Matrix:" << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

    ## #12. Program to find largest and smallest number from an array



```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[50], n, maxVal, minVal;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    maxVal = arr[0];
    minVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    cout << "Largest Element: " << maxVal << endl;
    cout << "Smallest Element: " << minVal << endl;

    return 0;
}

```

    ## #13. Program to determine n Fibonacci numbers using recursion



```cpp
#include <iostream>
    using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}

```

    ## #14. Program to calculate factorial of a number using recursion



```cpp
#include <iostream>
    using namespace std;

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}

```

    ## #15. Program to implement first pattern matching algorithm



```cpp
#include <iostream>
#include <cstring>
    using namespace std;

int main()
{
    char text[100], pattern[100];

    cout << "Enter Text: ";
    cin >> text;
    cout << "Enter Pattern: ";
    cin >> pattern;

    int textLen = strlen(text);
    int patLen = strlen(pattern);
    int maxLoop = textLen - patLen;
    bool found = false;

    for (int k = 0; k <= maxLoop; k++)
    {
        int i;
        for (i = 0; i < patLen; i++)
        {
            if (pattern[i] != text[k + i])
                break;
        }
        if (i == patLen)
        {
            cout << "Pattern found at index " << k << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Pattern not found." << endl;

    return 0;
}

```

    ## #16. Program to implement operations in a Linked List



```cpp
#include <iostream>
    using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    cout << val << " inserted." << endl;
}

void remove(int val)
{
    Node *temp = head;
    Node *prev = NULL;

    if (temp != NULL && temp->data == val)
    {
        head = temp->next;
        delete temp;
        cout << val << " deleted." << endl;
        return;
    }

    while (temp != NULL && temp->data != val)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Element not found." << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << val << " deleted." << endl;
}

void display()
{
    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    int choice, val;
    while (true)
    {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\nChoose: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter value: ";
            cin >> val;
            insert(val);
        }
        else if (choice == 2)
        {
            cout << "Enter value: ";
            cin >> val;
            remove(val);
        }
        else if (choice == 3)
        {
            display();
        }
        else
            break;
    }
    return 0;
}

```

    ## #17. Program to implement operations in Stack



```cpp
#include <iostream>
#define MAX 5
    using namespace std;

int stack[MAX], top = -1;

void push(int val)
{
    if (top == MAX - 1)
        cout << "Stack Overflow!" << endl;
    else
    {
        top++;
        stack[top] = val;
        cout << val << " pushed." << endl;
    }
}

void pop()
{
    if (top == -1)
        cout << "Stack Underflow!" << endl;
    else
    {
        cout << stack[top] << " popped." << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
        cout << "Stack is empty." << endl;
    else
    {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}

int main()
{
    int ch, val;
    while (true)
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Value: ";
            cin >> val;
            push(val);
        }
        else if (ch == 2)
            pop();
        else if (ch == 3)
            display();
        else
            break;
    }
    return 0;
}

```

    ## #18. Program to implement operations in Queue



```cpp
#include <iostream>
#define MAX 5
    using namespace std;

int queue[MAX], front = -1, rear = -1;

void enqueue(int val)
{
    if (rear == MAX - 1)
        cout << "Queue Overflow!" << endl;
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
        cout << val << " enqueued." << endl;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << queue[front] << " dequeued." << endl;
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
        cout << "Queue is empty." << endl;
    else
    {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main()
{
    int ch, val;
    while (true)
    {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Value: ";
            cin >> val;
            enqueue(val);
        }
        else if (ch == 2)
            dequeue();
        else if (ch == 3)
            display();
        else
            break;
    }
    return 0;
}

```

    ## #19. Program to implement Tower of Hanoi



```cpp
#include <iostream>
    using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}

```

    ## #20. Program to implement Binary Tree and its Traversals



```cpp
#include <iostream>
    using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void printPreorder(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

void printInorder(Node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPostorder(Node *node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

int main()
{
    // Creating a simple tree
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder Traversal: ";
    printPreorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    printInorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    printPostorder(root);
    cout << endl;

    return 0;
}

```