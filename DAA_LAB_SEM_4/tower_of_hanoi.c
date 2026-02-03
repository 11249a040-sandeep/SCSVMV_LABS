/*
Aim:
To solve the Tower of Hanoi problem using recursion.

Algorithm:
1. Start
2. Read number of disks
3. If there is only one disk, move it from source to destination
4. Otherwise:
     a) Move n-1 disks from source to auxiliary
     b) Move nth disk from source to destination
     c) Move n-1 disks from auxiliary to destination
5. Stop

Sample Input:
Enter number of disks: 3

Sample Output:
Move disk 1 from S to D
Move disk 2 from S to A
Move disk 1 from D to A
Move disk 3 from S to D
Move disk 1 from A to S
Move disk 2 from A to D
Move disk 1 from S to D
*/

#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if(n == 1)
    {
        printf("Move disk %d from %c to %c\n", n, source, destination);
        return;
    }

    towerOfHanoi(n-1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n-1, auxiliary, destination, source);
}

int main()
{
    int disks;

    printf("Enter number of disks: ");
    scanf("%d", &disks);

    printf("\nSteps to solve Tower of Hanoi:\n");
    towerOfHanoi(disks, 'S', 'D', 'A');

    return 0;
}
