/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 6b — Process Management: exec()
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    } else if (pid == 0) {
        printf("Child process: replacing with 'ls' command output:\n");
        printf("--------------------------------------------------\n");
        execl("/bin/ls", "ls", "-l", NULL);
        /* This line runs only if exec fails */
        printf("exec() failed.\n");
    } else {
        wait(NULL);
        printf("--------------------------------------------------\n");
        printf("Parent process: child has finished execution.\n");
    }

    return 0;
}

/*
 * Sample Output:
 * Child process: replacing with 'ls' command output:
 * --------------------------------------------------
 * total 12
 * -rw-r--r-- 1 user user 412 Apr 17 a_fork.c
 * -rw-r--r-- 1 user user 398 Apr 17 b_exec.c
 * --------------------------------------------------
 * Parent process: child has finished execution.
 */
