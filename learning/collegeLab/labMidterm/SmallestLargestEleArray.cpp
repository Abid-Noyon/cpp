/* #include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int smallest = arr[0], largest = arr[0];
    int smallestPos = 1, largestPos = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestPos = i + 1; // 1-based index
        }

        if (arr[i] > largest)
        {
            largest = arr[i];
            largestPos = i + 1; // 1-based index
        }
    }

    cout << "Smallest = " << smallest << ", at position " << smallestPos << "\nLargest = " << largest << " at position " << largestPos << endl;
    return 0;
}
 */

#include <iostream>
using namespace std;

int main()
{
    int n, smallest, largest, smallestPos, largestPos;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    smallest = largest = arr[0];
    smallestPos = largestPos = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
            smallestPos=i+1;
        }
        if (arr[i]>largest)
        {
            largest=arr[i];
            largestPos=i+1;
        }
    }
    cout << "Largest = " << largest << ", at position : " << largestPos << endl;
    cout << "Largest = " << smallest << ", at position : " << smallestPos << endl;

    return 0;
}