/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 7a — CPU Scheduling: FCFS (First Come First Serve)
 */

#include <stdio.h>

int main() {
    int n, i;
    int bt[10], wt[10], tat[10];
    float total_wt = 0, total_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst times:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    for (i = 1; i < n; i++)
        wt[i] = wt[i - 1] + bt[i - 1];

    for (i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
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
 * P1: 5   P2: 3   P3: 8
 *
 * Sample Output:
 * Process  Burst Time  Waiting Time  Turnaround Time
 * P1       5           0             5
 * P2       3           5             8
 * P3       8           8             16
 *
 * Average Waiting Time    : 4.33
 * Average Turnaround Time : 9.67
 */
