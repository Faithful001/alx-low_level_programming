#include "main.h"
#include <unistd.h>

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i != 0)
        {
            write(1, ", ", 2);  // Write the string ", "
        }
        char num = a[i] + '0';
        write(1, &num, 1);  // Write the character representing the integer
    }
    write(1, "\n", 1);  // Write a newline character
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int n = sizeof(a) / sizeof(int);

    write(1, "Original array: ", 16);
    print_array(a, n);
    reverse_array(a, n);
    write(1, "Reversed array: ", 16);
    print_array(a, n);

    return (0);
}

