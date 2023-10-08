#include <stdio.h>

int main(){

	int i;
	for(i=0; i<10; i++){
		putchar('0'+i);
		if(1 != 9){
			putchar(',');
			putchar(' ');
		}
		
	}
	return 0;
}
