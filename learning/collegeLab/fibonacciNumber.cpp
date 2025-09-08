// Fibonacci numbers
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 0)  // Both cases return 0
        return n;
    else
    {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}

int main()
{
    int n, i=0;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    while (i < n)
    {
        printf("%d ", fibonacci(i));
        ++i;
    }
    printf("\n");
    
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", fibonacci(i));
    // }
    // printf("\n");
    return 0;
}