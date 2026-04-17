/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 5b — System Call: wait()
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    } else if (pid == 0) {
        printf("Child Process: PID = %d\n", getpid());
        printf("Child Process: Executing...\n");
    } else {
        wait(NULL);
        printf("Parent Process: PID = %d\n", getpid());
        printf("Parent Process: Resumed after child finished.\n");
    }

    return 0;
}

/*
 * Sample Output:
 * Child Process: PID = 4821
 * Child Process: Executing...
 * Parent Process: PID = 4820
 * Parent Process: Resumed after child finished.
 */
