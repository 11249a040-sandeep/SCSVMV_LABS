/*
Program: Bin Packing using Best Fit

Aim:
To place items in bins such that remaining space is minimized.
*/

#include <stdio.h>

void bestFit(int items[], int n, int capacity)
{
    int bin[n];
    int count = 0;

    for (int i = 0; i < n; i++)
        bin[i] = capacity;

    for (int i = 0; i < n; i++)
    {
        int best = -1;
        int min = capacity + 1;

        for (int j = 0; j < count; j++)
        {
            if (bin[j] >= items[i] && (bin[j] - items[i]) < min)
            {
                best = j;
                min = bin[j] - items[i];
            }
        }

        if (best != -1)
        {
            bin[best] -= items[i];
            printf("Item %d placed in Bin %d\n", i + 1, best + 1);
        }
        else
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

    bestFit(items, n, capacity);

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
Item 3 placed in Bin 2
Item 4 placed in Bin 2
Item 5 placed in Bin 1
Total bins used = 2
*/