/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 8 — Deadlock Avoidance: Banker's Algorithm
 */

#include <stdio.h>

int main() {
    int n, m, i, j, k;
    int alloc[10][10], max[10][10], need[10][10];
    int avail[10], finish[10], safe_seq[10];

    printf("Enter number of processes : ");
    scanf("%d", &n);
    printf("Enter number of resources : ");
    scanf("%d", &m);

    printf("\nEnter Allocation Matrix (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        printf("P%d: ", i);
        for (j = 0; j < m; j++)
            scanf("%d", &alloc[i][j]);
    }

    printf("\nEnter Maximum Matrix (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        printf("P%d: ", i);
        for (j = 0; j < m; j++)
            scanf("%d", &max[i][j]);
    }

    printf("\nEnter Available Resources: ");
    for (i = 0; i < m; i++)
        scanf("%d", &avail[i]);

    /* Calculate Need matrix */
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];

    /* Display Need matrix */
    printf("\nNeed Matrix:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i);
        for (j = 0; j < m; j++)
            printf("%d ", need[i][j]);
        printf("\n");
    }

    /* Initialise finish array */
    for (i = 0; i < n; i++)
        finish[i] = 0;

    /* Banker's Safety Algorithm */
    int count = 0;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            if (!finish[i]) {
                int ok = 1;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]) {
                        ok = 0;
                        break;
                    }
                }
                if (ok) {
                    for (j = 0; j < m; j++)
                        avail[j] += alloc[i][j];
                    safe_seq[count++] = i;
                    finish[i] = 1;
                }
            }
        }
    }

    /* Check if all processes finished */
    int safe = 1;
    for (i = 0; i < n; i++) {
        if (!finish[i]) {
            safe = 0;
            break;
        }
    }

    if (safe) {
        printf("\nSystem is in a SAFE state.\n");
        printf("Safe Sequence: ");
        for (i = 0; i < n; i++)
            printf("P%d%s", safe_seq[i], (i < n - 1) ? " -> " : "\n");
    } else {
        printf("\nSystem is in an UNSAFE state (Deadlock may occur).\n");
    }

    return 0;
}

/*
 * Sample Input:
 * Processes: 5   Resources: 3
 * Allocation: P0:0 1 0  P1:2 0 0  P2:3 0 2  P3:2 1 1  P4:0 0 2
 * Maximum:    P0:7 5 3  P1:3 2 2  P2:9 0 2  P3:2 2 2  P4:4 3 3
 * Available:  3 3 2
 *
 * Sample Output:
 * Need Matrix:
 * P0: 7 4 3
 * P1: 1 2 2
 * P2: 6 0 0
 * P3: 0 1 1
 * P4: 4 3 1
 *
 * System is in a SAFE state.
 * Safe Sequence: P1 -> P3 -> P4 -> P0 -> P2
 */
