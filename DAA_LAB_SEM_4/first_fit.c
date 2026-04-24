/*
Program: Bin Packing using First Fit

Aim:
To place items into bins using First Fit strategy.
*/

#include <stdio.h>

void firstFit(int items[], int n, int capacity)
{
    int bin[n];
    int count = 0;

    for (int i = 0; i < n; i++)
        bin[i] = capacity;

    for (int i = 0; i < n; i++)
    {
        int placed = 0;

        for (int j = 0; j < count; j++)
        {
            if (bin[j] >= items[i])
            {
                bin[j] -= items[i];
                printf("Item %d placed in Bin %d\n", i + 1, j + 1);
                placed = 1;
                break;
            }
        }

        if (!placed)
        {
            bin[count] -= items[i];
            printf("Item %d placed in Bin %d\n", i + 1, count + 1);
            count++;
        }
    }

    printf("Total bins used = %d\n", count);
}

int main()
{
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter bin capacity: ");
    scanf("%d", &capacity);

    int items[n];

    for (int i = 0; i < n; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d", &items[i]);
    }

    firstFit(items, n, capacity);

    return 0;
}

/*
Sample Output:

Enter number of items: 5
Enter bin capacity: 15
Item 1: 6
Item 2: 12
Item 3: 1
Item 4: 1
Item 5: 9

Item 1 placed in Bin 1
Item 2 placed in Bin 2
Item 3 placed in Bin 1
Item 4 placed in Bin 1
Item 5 placed in Bin 3
Total bins used = 3
*/