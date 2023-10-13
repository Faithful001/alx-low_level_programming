#include "main.h"
#include <unistd.h>

void fizz_buzz(void)
{
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            write(1, "FizzBuzz", 8);
        } else if (i % 3 == 0) {
            write(1, "Fizz", 4);
        } else if (i % 5 == 0) {
            write(1, "Buzz", 4);
        } else {
            char c = i + '0';
            write(1, &c, 1);
        }

        if (i < 100) {
            write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}

int main(void)
{
    fizz_buzz();
    return (0);
}
