#include "main.h"

void rev_string(char *s) {
    int length = 0;
	int i;
    
    while (s[length] != '\0') {
        length++;
    }
    
    for (i = length - 1; i >= 0; i--) {
        _putchar(s[i]);
    }
    
    _putchar('\n');
}

int main(void) {
    char str[] = "My School";
    rev_string(str);
    
    return 0;
}
