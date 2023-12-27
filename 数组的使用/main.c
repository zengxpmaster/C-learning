#include <stdio.h>
#include <stdlib.h>




void bubble_sort(int a[], int len) {
		int b, j, temp;
		for (b = 0; b < len - 1; b++)
		for (j = 0; j < len - 1 - b; j++)
		if (a[j] > a[j + 1])
		{
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
	}
	int main() {
	int a[11]={1,5,2,7,9,7,6,9,5,1,9};
	int part[3]={};
	part[0]=a[0];
	part[1]=a[1];
	part[2]=a[2];
	printf("\narrays\n%d,%d,%d\n",part[0],part[1],part[2]); 
	printf("narray is ");
	int i=0;
	for(i;i<11;i++){
		printf("%d",a[i]);
	}
	int len = sizeof(a) / sizeof(a[0]);
	bubble_sort(a, len);
	int b;
	for (b = 0; i < len; i++)
	printf("%d ", a[b]);
	return 0;
}

