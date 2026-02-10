#include <stdio.h>

/*
Aim:
To print Fibonacci series using recursive method.

Algorithm:
1. Start
2. Read number of terms n
3. Define recursive function fibonacci(n)
     a. If n == 0 return 0
     b. If n == 1 return 1
     c. Else return fibonacci(n-1) + fibonacci(n-2)
4. Call function from i = 0 to n-1 and print results
5. Stop

Sample Input:
Enter number of terms: 5

Sample Output:
Fibonacci series using recursive method:
0 1 1 2 3
*/

// Recursive Fibonacci function
int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series using recursive method:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
