#include <stdio.h>
int main() {
	int a,b,c;
	for(a=1; a<=9; a++) {
		for(b=1; b<=a; b++) {
			c=a*b;
			printf("%d*%d=%2d  ",b,a,c);
		}
		printf("\n");
	}
	getchar();			//ÔÝÍ£³ÌÐò 
	return 0;
}

