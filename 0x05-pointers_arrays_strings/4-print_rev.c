#include "main.h"

void print_rev(char *s) {
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
    char str[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    
    return 0;
}
