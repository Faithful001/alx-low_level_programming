#include "main.h"

char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return original_dest;
}

int main(void) {
    char destination[98];
    char source[] = "First, solve the problem. Then, write the code\n";

    _strcpy(destination, source);

    char *ptr = destination;
	
    while (*ptr != '\0') {
        _putchar(*ptr);
        ptr++;
    }

    _putchar('\n');

    return 0;
}


