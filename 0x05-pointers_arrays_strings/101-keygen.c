#include "main.h"
#include <time.h>
#include <stdlib.h>


void generate_password(char *password, int length) {

    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_size = sizeof(charset) - 1;

    srand(time(NULL));
	
	int i;

    for (i = 0; i < length; i++) {
        int random_index = rand() % charset_size; 
        password[i] = charset[random_index];
    }

    password[length] = '\0'; // Null-terminate the password
}

int main(void) {
    char password[9];
    generate_password(password, 8);

	int i;
	
    for (i = 0; i < 8; i++) {
        _putchar(password[i]);
    }
    _putchar('\n');

    return 0;
}
