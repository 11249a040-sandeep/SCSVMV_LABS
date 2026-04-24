/*
Program: Tower of Hanoi using Recursion

Aim:
To solve the Tower of Hanoi problem and display
the sequence of disk movements.
*/

#include <stdio.h>

// Function to move disks recursively
void moveDisks(int n, char source, char destination, char helper)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    moveDisks(n - 1, source, helper, destination);

    printf("Move disk %d from %c to %c\n", n, source, destination);

    moveDisks(n - 1, helper, destination, source);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("\nSteps:\n");
    moveDisks(n, 'S', 'D', 'A');

    return 0;
}

/*
Sample Output:

Enter number of disks: 3

Steps:
Move disk 1 from S to D
Move disk 2 from S to A
Move disk 1 from D to A
Move disk 3 from S to D
Move disk 1 from A to S
Move disk 2 from A to D
Move disk 1 from S to D
*/