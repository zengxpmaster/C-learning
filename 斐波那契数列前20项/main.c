#include <stdio.h>
int main() {
	int count;
	long long int a=0,b=1,c,n;
	printf("请问您想列出斐波那契数列的前几项？（1~90）：");
	scanf("%d",&n);
	while(n<=0||n>90) {
		printf("\n您的输入有误，请重新输入：");
		scanf("%d",&n);
	}
	for(count=1; count<=n; count++) {
		c=a+b;
		a=b;
		printf("%lld ",b);			//在变量b被赋值前输出 
		b=c;
		if(count%10==0) {			//每输出10个数换行 
			printf("\n");
		}
	}
	getchar();						
	getchar();						//暂停程序 
	return 0;
}

