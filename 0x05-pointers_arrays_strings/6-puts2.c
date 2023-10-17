#include "main.h"

void puts2(char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        _putchar(str[i]);
        i += 2; // Move to every other character
    }
    
    _putchar('\n');
}


int main(void) {
    char str[] = "0123456789";
    puts2(str);
    
    return 0;
}





