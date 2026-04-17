/*
 * Name    : Sandeep Kumar Bollavaram
 * Reg No  : 11249A040
 * Email   : 11249A040@kanchiuniv.ac.in
 * Ex No   : 5e — System Call: open(), read(), write()
 */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char filename[100];
    char buffer[256];
    int bytes_read;

    printf("Enter filename to read: ");
    scanf("%s", filename);

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }

    printf("\n--- Contents of %s ---\n", filename);
    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0) {
        buffer[bytes_read] = '\0';
        write(1, buffer, bytes_read);   /* write to stdout (fd 1) */
    }
    printf("\n----------------------\n");

    close(fd);
    return 0;
}

/*
 * Sample Output:
 * Enter filename to read: c_getpid.c
 *
 * --- Contents of c_getpid.c ---
 * #include <stdio.h>
 * #include <unistd.h>
 * int main() { ... }
 * ------------------------------
 */
