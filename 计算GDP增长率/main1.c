#include <stdio.h>
double growth(float x[5])
{
	int i;
	float z[4];
	for(i=0;i<4;i++)
	{
		z[i]=(x[i+1]-x[i])/x[i]*100;
		printf("%.2f%%		",z[i]);
	}
}
int main() {
	int i;
	float x[5]={746395.1,832035.9,919281.1,986515.2,1015986.2};
	printf("年  份：2017		2018		2019		2020\n");
	printf("增长率：");
	growth(x);
	printf("\n");
	return 0;
}
