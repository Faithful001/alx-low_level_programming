#include <stdio.h>
#include <time.h>

int main() {
   
    time_t t;
    time(&t);
   
    int n = t % 10;
    
    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }

    printf("\n");

    return 0;
}

