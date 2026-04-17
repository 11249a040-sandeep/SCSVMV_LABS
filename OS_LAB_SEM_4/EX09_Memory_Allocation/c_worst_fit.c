/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 9c — Memory Allocation: Worst Fit
 */

#include <stdio.h>

int main() {
    int nb, np, i, j, worst;
    int block[10], process[10], alloc[10];

    printf("Enter number of memory blocks: ");
    scanf("%d", &nb);
    printf("Enter block sizes:\n");
    for (i = 0; i < nb; i++) {
        printf("Block %d: ", i + 1);
        scanf("%d", &block[i]);
    }

    printf("Enter number of processes: ");
    scanf("%d", &np);
    printf("Enter process sizes:\n");
    for (i = 0; i < np; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &process[i]);
        alloc[i] = -1;
    }

    /* Worst Fit: allocate largest available block */
    for (i = 0; i < np; i++) {
        worst = -1;
        for (j = 0; j < nb; j++) {
            if (block[j] >= process[i]) {
                if (worst == -1 || block[j] > block[worst])
                    worst = j;
            }
        }
        if (worst != -1) {
            alloc[i]      = worst;
            block[worst] -= process[i];
        }
    }

    printf("\n--- Worst Fit Allocation ---\n");
    printf("Process\tSize\tAllocated Block\n");
    for (i = 0; i < np; i++) {
        printf("P%d\t%d\t", i + 1, process[i]);
        if (alloc[i] != -1)
            printf("Block %d\n", alloc[i] + 1);
        else
            printf("Not Allocated\n");
    }

    return 0;
}

/*
 * Sample Input:
 * Blocks: 5  →  sizes: 100 500 200 300 600
 * Processes: 4  →  sizes: 212 417 112 426
 *
 * Sample Output:
 * --- Worst Fit Allocation ---
 * Process  Size  Allocated Block
 * P1       212   Block 5
 * P2       417   Block 2
 * P3       112   Block 5
 * P4       426   Not Allocated
 */
