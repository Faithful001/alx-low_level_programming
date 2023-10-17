#include "main.h"

int _strlen(char *s) {
    int length = 0;
    
    while (s[length] != '\0') {
        length++;
    }
    
    return length;
}

int main(void) {
    char str[] = "My first strlen!";
    int length = _strlen(str);

    _putchar(length / 10 + '0');
    _putchar(length % 10 + '0');
    _putchar('\n');

    return (0);
}
