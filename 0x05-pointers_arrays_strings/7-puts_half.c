#include "main.h"

void puts_half(char *str) {
    int length = 0;
	int i;

    while (str[length] != '\0') {
        length++;
    }

    int start_index;

    if (length % 2 == 0) {
        start_index = length / 2;
    } else {
        start_index = (length - 1) / 2;
    }

    for (i = start_index; i < length; i++) {
        _putchar(str[i]);
    }

    _putchar('\n');
}

int main(void) {
    char str1[] = "0123456789";

    puts_half(str1);

    return 0;
}
