/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 5d — System Call: opendir() and readdir()
 */

#include <stdio.h>
#include <dirent.h>

int main() {
    DIR *dir;
    struct dirent *entry;
    char path[100];

    printf("Enter directory path (press Enter for current): ");
    fgets(path, sizeof(path), stdin);

    /* Remove trailing newline */
    int len = 0;
    while (path[len] != '\0') len++;
    if (len > 0 && path[len - 1] == '\n')
        path[len - 1] = '\0';

    /* Default to current directory if empty */
    if (path[0] == '\0')
        path[0] = '.', path[1] = '\0';

    dir = opendir(path);
    if (dir == NULL) {
        printf("Error: Cannot open directory '%s'\n", path);
        return 1;
    }

    printf("\nFiles in '%s':\n", path);
    printf("------------------------\n");
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
    return 0;
}

/*
 * Sample Output:
 * Enter directory path (press Enter for current):
 * Files in '.':
 * ------------------------
 * .
 * ..
 * a_stat.c
 * b_wait.c
 * c_getpid.c
 * d_opendir_readdir.c
 * e_open_read_write.c
 */
