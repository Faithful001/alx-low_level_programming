#include <unistd.h>

int main(void)
{
    char error_message[] = "Error: This is a custom error message\n";

    /* Using the write system call to print to standard error (file descriptor 2) */
    write(2, error_message, sizeof(error_message) - 1);

    return 1;
}

