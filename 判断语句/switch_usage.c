#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b;
	printf("������ɼ���");
	scanf("%d",&a);
	while(a<0||a>100){
		printf("����ɼ���Ч��\n���������룺");
		scanf("%d",&a);
	}
	b=a/10; 
	switch(b){
	case 10:
		printf("������ʦ�ĳɼ��ȼ�A��");
		break;
	case 9:
		printf("������ʦ�ĳɼ��ȼ�A��");
		break;
	case 8:
		printf("������ʦ�ĳɼ��ȼ�B��");
		break;
	case 7:
		printf("������ʦ�ĳɼ��ȼ�C��");
		break;
	case 6:
		printf("������ʦ�ĳɼ��ȼ�D��");
		break;
	default :
		printf("������ʦ�ĳɼ��ȼ�E��");
		break;
	}
	return 0;
}
