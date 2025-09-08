/* #include <iostream>
using namespace std;

int main()
{
    int n, pos, value;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; // fixed max size

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> value;

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1]; // shift right

    arr[pos] = value;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
 */

#include <iostream>
using namespace std;

int main()
{
    int n, pos, value;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[100];

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert(0-based index): ";
    cin >> pos;
    cout << "Enter element: ";
    cin >> value;

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1]; //right shift
    }

    arr[pos] = value;
    n++;
    cout << "After insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}