/*
Aim:
To print Fibonacci series using iterative and recursive methods.

Algorithm (Iterative Method):
1. Start
2. Read number of terms
3. Initialize first = 0 and second = 1
4. Repeat for n terms
     • If term is 0 or 1, print it directly
     • Otherwise, add previous two terms
5. Stop

Algorithm (Recursive Method):
1. Create a function fibonacci(n)
2. If n is 0 return 0
3. If n is 1 return 1
4. Otherwise return fibonacci(n-1) + fibonacci(n-2)

Sample Input:
Enter number of terms: 5

Sample Output:
Iterative: 0 1 1 2 3
Recursive: 0 1 1 2 3
*/

#include <stdio.h>

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
    int n, first = 0, second = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci series using iterative method:\n");
    for(i = 0; i < n; i++)
    {
        if(i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n\nFibonacci series using recursive method:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
