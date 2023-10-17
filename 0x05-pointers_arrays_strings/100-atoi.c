#include "main.h"

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for and handle the sign (+ or -)
    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // Convert the digits to an integer
    while (s[i] >= '0' && s[i] <= '9') {
        result = (result * 10) + (s[i] - '0');
        i++;
    }

    return result * sign;
}

int main(void) {
    char str1[] = "12345";
    char str2[] = "   -123";
    char str3[] = "Hello, 6789 World!";
    char str4[] = "abc";

    int num1 = _atoi(str1);
    int num2 = _atoi(str2);
    int num3 = _atoi(str3);
    int num4 = _atoi(str4);

    _putchar(num1 / 10000 + '0');
    _putchar(num1 / 1000 % 10 + '0');
    _putchar(num1 / 100 % 10 + '0');
    _putchar(num1 / 10 % 10 + '0');
    _putchar(num1 % 10 + '0');
    _putchar('\n');

    _putchar(num2 / 10000 + '0');
    _putchar(num2 / 1000 % 10 + '0');
    _putchar(num2 / 100 % 10 + '0');
    _putchar(num2 / 10 % 10 + '0');
    _putchar(num2 % 10 + '0');
    _putchar('\n');

    _putchar(num3 / 10000 + '0');
    _putchar(num3 / 1000 % 10 + '0');
    _putchar(num3 / 100 % 10 + '0');
    _putchar(num3 / 10 % 10 + '0');
    _putchar(num3 % 10 + '0');
    _putchar('\n');

    _putchar(num4 / 10000 + '0');
    _putchar(num4 / 1000 % 10 + '0');
    _putchar(num4 / 100 % 10 + '0');
    _putchar(num4 / 10 % 10 + '0');
    _putchar(num4 % 10 + '0');
    _putchar('\n');

    return 0;
}

