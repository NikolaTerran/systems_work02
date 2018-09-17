#include <stdio.h>
#include <stdlib.h>

int main(){

	unsigned int a =  4000000000;
	char *b = &a;
	printf("4000000000 in hexadecimal.\n");
	printf("%x\n",a);
	
	*b += 1;
        printf("increment the reference value by 1\n");
	printf("%x\n",a);
	
	printf("increment the reference by 1, then
			increase the referenced value by 16.\n");
	b++;
	*b += 16;

	printf("%x\n",a);
	printf("voila!");
	printf("By the way I don't find a point to convert hex to decimal and print it, because the output of that action is completely jibberish.");
	return 0;
}
