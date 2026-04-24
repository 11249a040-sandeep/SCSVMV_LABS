/*
Program: Fractional Knapsack

Aim:
To maximize profit using greedy method.
*/

#include <stdio.h>

struct Item
{
    int weight, value;
    float ratio;
};

void sort(struct Item arr[], int n)
{
    struct Item temp;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j].ratio < arr[j + 1].ratio)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main()
{
    int n;
    float capacity, profit = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Item %d (weight value): ", i + 1);
        scanf("%d %d", &arr[i].weight, &arr[i].value);
        arr[i].ratio = (float)arr[i].value / arr[i].weight;
    }

    printf("Enter capacity: ");
    scanf("%f", &capacity);

    sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (capacity >= arr[i].weight)
        {
            profit += arr[i].value;
            capacity -= arr[i].weight;
        }
        else
        {
            profit += arr[i].ratio * capacity;
            break;
        }
    }

    printf("Maximum profit = %.2f\n", profit);

    return 0;
}

/*
Sample Output:

Enter number of items: 5
Item 1: 12 5
Item 2: 10 60
Item 3: 5 40
Item 4: 2 15
Item 5: 6 54
Enter capacity: 15

Maximum profit = 121.00
*/