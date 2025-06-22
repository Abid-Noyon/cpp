#include <stdio.h>

int main()
{ 
    int value[5], i;
    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &value[i]);
    }
    printf("You entered:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i+1, value[i]);
    }
}