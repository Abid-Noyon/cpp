Based on the handwritten list in the image, here are the separate C++ programs for each question.

### 1. Program to find the largest number from an array

This program scans through the array and keeps track of the maximum value found.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, maxVal;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Assume the first element is the largest initially
    maxVal = arr[0];

    // Iterate through the rest of the array
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    cout << "The largest number is: " << maxVal << endl;

    return 0;
}

```

    ## #2. Program to search an item from an array using Linear Search

        Linear search checks each element one by one until the target is found.

```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[100], n, i, item, found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter item to search: ";
    cin >> item;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            cout << "Item found at index " << i << endl;
            found = 1;
            break;
        }
    }

    if (!found)
    {
        cout << "Item not found in the array." << endl;
    }

    return 0;
}

```

    ## #3. Binary Search Algorithm

        Binary search
    requires a
sorted array.It repeatedly divides the search interval in half.

```cpp
#include <iostream>
#include <algorithm> // for sort()
    using namespace std;

int main()
{
    int arr[100], n, i, item, beg, end, mid;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Binary search requires a sorted array
    sort(arr, arr + n);
    cout << "Sorted array (required for Binary Search): ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Enter item to search: ";
    cin >> item;

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    while (beg <= end && arr[mid] != item)
    {
        if (item < arr[mid])
            end = mid - 1;
        else
            beg = mid + 1;

        mid = (beg + end) / 2;
    }

    if (arr[mid] == item)
    {
        cout << "Item found at index " << mid << endl;
    }
    else
    {
        cout << "Item not found." << endl;
    }

    return 0;
}

```

    ## #4. Find the first n Fibonacci numbers using recursion

        Recursion is used here to generate each Fibonacci number.

```cpp
#include <iostream>
    using namespace std;

// Recursive function
int fibonacci(int n)
{
    if ((n == 1) || (n == 0))
    {
        return (n);
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
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

    ## #5. Implement Tower of Hanoi problem using recursion

        The Tower of Hanoi is a classic problem solved using recursion to move disks between rods.

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

    // A, B and C are names of rods
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}

```

    ## #6. Replace a substring by another substring into a text

        This program uses string library functions to find and replace text.

```cpp
#include <iostream>
#include <string>
    using namespace std;

int main()
{
    string text, oldSub, newSub;

    cout << "Enter the main text: ";
    getline(cin, text); // getline allows spaces in input

    cout << "Enter the substring to be replaced: ";
    getline(cin, oldSub);

    cout << "Enter the new substring: ";
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

    ## #7. Sort an array using Bubble Sort Algorithm

        Bubble sort repeatedly steps through the list,
    compares adjacent elements and swaps them if they are in the wrong order.

```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[100], n, i, j, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort Logic
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

```

        ## #8. Quick Sort Algorithm

            Quick sort is a divide -
        and-conquer algorithm that selects a 'pivot' and
    partitions the array around it.

```cpp
#include <iostream>
    using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // Swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap pivot to correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Function to implement Quick Sort
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
    int arr[100], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

```

    ## #9. Implement operations in an
    array(Insertion and Deletion)

        This program handles inserting an element at a specific index(shifting others right) and
    deleting an element(shifting others left).

```cpp
#include <iostream>
    using namespace std;

int main()
{
    int arr[100], n, i, pos, val, choice;

    cout << "Enter initial number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n1. Insert an element\n2. Delete an element\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
    { // Insertion
        cout << "Enter position to insert (0 to " << n << "): ";
        cin >> pos;
        cout << "Enter value to insert: ";
        cin >> val;

        if (pos >= 0 && pos <= n)
        {
            for (i = n - 1; i >= pos; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos] = val;
            n++; // Increase size

            cout << "Array after insertion: ";
            for (i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
        {
            cout << "Invalid Position!" << endl;
        }
    }
    else if (choice == 2)
    { // Deletion
        cout << "Enter position to delete (0 to " << n - 1 << "): ";
        cin >> pos;

        if (pos >= 0 && pos < n)
        {
            for (i = pos; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--; // Decrease size

            cout << "Array after deletion: ";
            for (i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
        {
            cout << "Invalid Position!" << endl;
        }
    }
    else
    {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}

```