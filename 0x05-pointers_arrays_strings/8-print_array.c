#include "main.h"

void print_array(int *a, int n) {
	int i;
    for (i = 0; i < n; i++) {
        int num = a[i];
        int is_negative = 0;

        if (num < 0) {
            is_negative = 1;
            num = -num;
        }

        if (i != 0) {
            _putchar(',');
            _putchar(' ');
        }

        if (is_negative) {
            _putchar('-');
        }

        if (num == 0) {
            _putchar('0');
        } else {
            int divisor = 1;
            while ((num / divisor) >= 10) {
                divisor *= 10;
            }
            while (divisor > 0) {
                _putchar((num / divisor) + '0');
                num %= divisor;
                divisor /= 10;
            }
        }
    }

    _putchar('\n');
}

#include "main.h"

int main(void) {
    int arr[] = {98, 403, -198, 298, -1024};

    print_array(arr, 3);

    return 0;
}


