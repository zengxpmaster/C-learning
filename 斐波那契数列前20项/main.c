#include <stdio.h>
int main() {
	int count;
	long long int a=0,b=1,c,n;
	printf("���������г�쳲��������е�ǰ�����1~90����");
	scanf("%d",&n);
	while(n<=0||n>90) {
		printf("\n���������������������룺");
		scanf("%d",&n);
	}
	for(count=1; count<=n; count++) {
		c=a+b;
		a=b;
		printf("%lld ",b);			//�ڱ���b����ֵǰ��� 
		b=c;
		if(count%10==0) {			//ÿ���10�������� 
			printf("\n");
		}
	}
	getchar();						
	getchar();						//��ͣ���� 
	return 0;
}

