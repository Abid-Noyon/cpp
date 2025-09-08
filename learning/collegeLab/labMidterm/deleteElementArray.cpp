#include <iostream>
using namespace std;

int main()
{
    int n, pos;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to delete (0-based index): ";
    cin >> pos;

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1]; // shift left

    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
