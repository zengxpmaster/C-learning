#include <stdio.h>
#include<time.h>
#include <stdlib.h>
/**�˳�����һ��ģ��ATM������ԭ��ĳ��� 
**/

int main()
 {
 	int a = 5000,num;
 
	do
{ 
	printf("   ��ѡ����Ҫ�����ҵ��\n1.ȡ�� 2.��� 3.��ѯ��� 4.�˳�\n") ;
	int b,key,d;
	scanf("%d",&num); 	
	system("cls");


		switch(num)
		{
		case 1:
			printf("������ȡ���");
			scanf("%d",&b);
			a -= b;
			printf("������6λȡ�����룺");
			scanf("%6d",&key);
			sleep(1);
			printf("����ȡ����Ϊ%dԪ\n",b);
			sleep(3);
			printf("ȡ��ɹ�\n");
			sleep(2);
			system("pause");
			system("cls");
			break;
		case 2:
			printf("����볮Ʊ\n");
			srand( (unsigned) time (NULL)) ;
			int c = rand()%10 ;//��������������� 
	 		for(;c == 0;) //�����ж�����������Ƿ�Ϊ0
	 		{ c = rand()%10;
			 }
			d = c*100;
			a += d;
			sleep(8);
			printf("���ѷ���%dԪ\n",d);
			sleep(1);
			printf("�����鳮, ���Ժ�");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��\n");
			sleep(1);
			printf("���ѳɹ�����%dԪ\n",d);
			sleep(2);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("���ڲ�ѯ, ���Ժ�");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��");
			sleep(1);
			printf("��\n");
			sleep(1);
			printf("�������Ϊ%dԪ\n",a);
			sleep(2);
			system("pause");
			system("cls");
			break;
		case 4:
			sleep(1);
			printf("�����˳�\n");
			sleep(1);
			break;
		default:printf("error\n");
		}
}while(num<=3);
return 0; 
}
