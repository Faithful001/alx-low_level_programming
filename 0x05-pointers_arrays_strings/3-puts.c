#include "main.h"

void _puts(char *str) {
    while (*str != '\0') {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}

int main(void) {
    char str[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    
    return 0;
}

