#include <stdio.h>

int main(){
	char letter = 'z';

	while(letter >= 'a'){
		putchar(letter);
		letter--;
	}
	putchar('\n');
	
	return 0;
}
