/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 5a — System Call: stat()
 */

#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat st;
    char fname[100];

    printf("Enter file name: ");
    scanf("%s", fname);

    if (stat(fname, &st) == -1) {
        printf("Error: File not found.\n");
        return 1;
    }

    printf("File Name   : %s\n", fname);
    printf("File Size   : %ld bytes\n", st.st_size);
    printf("Inode Number: %ld\n", (long)st.st_ino);
    printf("Permissions : %o\n", st.st_mode);

    return 0;
}

/*
 * Sample Output:
 * Enter file name: a_stat.c
 * File Name   : a_stat.c
 * File Size   : 512 bytes
 * Inode Number: 131073
 * Permissions : 100644
 */
