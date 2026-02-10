#include <stdio.h>

/*
Aim:
To print Fibonacci series using iterative method.

Algorithm:
1. Start
2. Read number of terms n
3. Initialize first = 0 and second = 1
4. Repeat from i = 0 to n-1
     a. If i <= 1, next = i
     b. Else next = first + second
        first = second
        second = next
     c. Print next
5. Stop

Sample Input:
Enter number of terms: 5

Sample Output:
Fibonacci series using iterative method:
0 1 1 2 3
*/

int main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series using iterative method:\n");

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

    return 0;
}
