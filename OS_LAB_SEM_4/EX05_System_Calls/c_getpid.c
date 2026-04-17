/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 5c — System Call: getpid()
 */

#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Current Process ID  : %d\n", getpid());
    printf("Parent Process ID   : %d\n", getppid());
    return 0;
}

/*
 * Sample Output:
 * Current Process ID  : 5102
 * Parent Process ID   : 4998
 */
