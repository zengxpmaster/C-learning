#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int a;
	printf("������ɼ���");
	LOOP:							//loopѭ����� 
	scanf("%d",&a);
	if (a>=0&&a<60){
		printf("������ʦ�ĳɼ��ȼ�ΪE��");
	}else if (a>=60&&a<70){
		printf("������ʦ�ĳɼ��ȼ�ΪD��");
	}else if (a>=70&&a<80){
		printf("������ʦ�ĳɼ��ȼ�ΪC��");
	}else if (a>=80&&a<90){
		printf("������ʦ�ĳɼ��ȼ�ΪB��");
	}else if (a>=90&&a<=100){
		printf("������ʦ�ĳɼ��ȼ�ΪA��");
	}else {
		printf("����ɼ���Ч��\n���������룺");
		goto LOOP; 
	}
	return 0;
}
