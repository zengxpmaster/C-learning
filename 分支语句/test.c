#include<stdio.h>
int main()
{
	int jw , dd , xs , xb , source , i;
	printf("��ֱ����� �������֣����������֣�ѧ�����ֺ�ϵ�������֣�");
	LOOP :do                                                         				/*ѭ��*/
	{
		scanf("%d,%d,%d,%d",jw,dd,xs,xb);
		if(jw>=0&&jw<=100&&dd>=0&&dd<=100&&xs>=0&&xs<=100&&xb>=0&&xb<=100)
		{
			source=jw*0.1+dd*0.1+xs*0.5+xb*0.3;                                /*�����ʦ����*/
			printf("��ʦ����Ϊ%f\n",source);
			if(source>=90)	       												/*���������ȼ�*/
			{
				printf("���������ȼ�Ϊ���㣡\n");
				return 0;
			}else if(source>=70)
			{
				printf("���������ȼ�Ϊ��ְ��\n");
				return 0;
			}else
			{
				printf("���������ȼ�Ϊ����ְ��\n");
				return 0;
			}
		}else			     												 /*�ɼ���Чʱ*/
		printf("����ĳɼ���Ч�����������룡\n");
		goto LOOP ;
	}while(i==0);
	return 0; 
}
	
	

