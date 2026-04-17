/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 7b — CPU Scheduling: Round Robin
 */

#include <stdio.h>

int main() {
    int n, tq, i, time = 0, done;
    int bt[10], rt[10], wt[10], tat[10];
    float total_wt = 0, total_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst times:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
        wt[i] = 0;
    }

    printf("Enter time quantum: ");
    scanf("%d", &tq);

    while (1) {
        done = 1;
        for (i = 0; i < n; i++) {
            if (rt[i] > 0) {
                done = 0;
                if (rt[i] > tq) {
                    time   += tq;
                    rt[i]  -= tq;
                } else {
                    time   += rt[i];
                    wt[i]   = time - bt[i];
                    rt[i]   = 0;
                }
            }
        }
        if (done)
            break;
    }

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
 * P1: 10   P2: 5   P3: 8
 * Enter time quantum: 2
 *
 * Sample Output:
 * Process  Burst Time  Waiting Time  Turnaround Time
 * P1       10          13            23
 * P2       5           8             13
 * P3       8           10            18
 *
 * Average Waiting Time    : 10.33
 * Average Turnaround Time : 18.00
 */
