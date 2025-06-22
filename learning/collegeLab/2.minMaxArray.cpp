#include <stdio.h>

int main()
{
    int size, i, min, max, minPos, maxPos;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    minPos = maxPos = 1; // Positions are 1-based
    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minPos = i + 1; // Convert to 1-based index
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i + 1; // Convert to 1-based index
        }
    }
    printf("Minimum element is %d at position %d\n", min, minPos);
    printf("Maximum element is %d at position %d\n", max, maxPos);
    return 0;
}