/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 7c — CPU Scheduling: SJF (Shortest Job First)
 */

#include <stdio.h>

int main() {
    int n, i, j, temp;
    int bt[10], wt[10], tat[10], p[10];
    float total_wt = 0, total_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst times:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    /* Sort by burst time (bubble sort), carry process labels along */
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                temp  = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp  = p[i];  p[i]  = p[j];  p[j]  = temp;
            }
        }
    }

    wt[0] = 0;
    for (i = 1; i < n; i++)
        wt[i] = wt[i - 1] + bt[i - 1];

    for (i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt[i], tat[i]);
        total_wt  += wt[i];
        total_tat += tat[i];
    }

    printf("\nAverage Waiting Time    : %.2f\n", total_wt / n);
    printf("Average Turnaround Time : %.2f\n", total_tat / n);

    return 0;
}

/*
 * Sample Input:
 * Enter number of processes: 3
 * P1: 6   P2: 2   P3: 8
 *
 * Sample Output:
 * Process  Burst Time  Waiting Time  Turnaround Time
 * P2       2           0             2
 * P1       6           2             8
 * P3       8           8             16
 *
 * Average Waiting Time    : 3.33
 * Average Turnaround Time : 8.67
 */
