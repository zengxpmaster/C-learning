#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void color(const unsigned short textColor) {    //�Զ��庯���ݲ����ı���ɫ
	if(textColor>=0 && textColor<=15)     //������0-15�ķ�Χ��ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //��һ���������ı�������ɫ
	else   //Ĭ�ϵ�������ɫ�ǰ�ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main(void) {
	char loop;
	int num,co,a,b,co1,i = 0,j,n;
	int v[100]={};							//��һ���㹻������顣
    FILE *fp;//�ļ�ָ��
 
    fp = fopen("classes.txt", "r");			//���ı���ʽ���ļ���
    if(fp == NULL){     					//���ļ�����
		printf("�ļ���ʧ��");
		return -1;
	}     
    while(fscanf(fp, "%d", &v[i]) != EOF) 	//��ȡ���ݵ����飬ֱ���ļ���β(����EOF)
        i++;
    fclose(fp);
    printf("����༶���룺 ");
    scanf("%d",&j);
	getchar();								//����س� 
	n=v[j-1];
	do {
		srand( (unsigned) time (NULL));
		num = rand()%n;
		co1 = rand()%2;
		printf("�����������������ȴ�������\n");
		sleep(3);
		a=num/10;
		b=num%10;
		if(co1==0) {
			co=12;
		} else {
			co=6;
		}
		color (co) ;
		switch(a) {
			case(0):
				printf("��   ������    \n");
				printf("   ��      ����\n");
				printf("�� ��      ����\n");
				printf("�� ������  ����\n");
				printf("�� ������  ����\n");
				printf("�� ������  ����\n");
				printf("�� ������  ����\n");
				printf("     ������    \n");
				break;
			case(1):
				printf("������ ��������\n");
				printf("     ����      \n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("    ��������    \n");
				break;
			case(2):
				printf("���� ����������\n");
				printf("�� ������  ����\n");
				printf("�� ��      ����\n");
				printf("�������� ����  \n");
				printf("������ ����    \n");
				printf("���� ����������\n");
				printf("�� ������������\n");
				printf("�� ������������\n");
				break;
			case(3):
				printf("     ������    \n");
				printf("�� ��      ����\n");
				printf("�� ������  ����\n");
				printf("������ ����    \n");
				printf("��������   ����\n");
				printf("���������� ����\n");
				printf("�� ���� �� ����\n");
				printf("     ������    \n");
				break;
			case(4):
				printf("�������� ������\n");
				printf("������   ������\n");
				printf("������ ��������\n");
				printf("���� ����������\n");
				printf("�� ������������\n");
				printf("   ����������  \n");
				printf("�������� ������\n");
				printf("����   ������  \n");
				break;
			case(5):
				printf("   ����������  \n");
				printf("   ��          \n");
				printf("   ��          \n");
				printf("   ��������    \n");
				printf("   ��      ��  \n");
				printf("           ��  \n");
				printf("           ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
			case(6):
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��          \n");
				printf("   ��������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
			case(7):
				printf("   ����������  \n");
				printf("           ��  \n");
				printf("         ��    \n");
				printf("         ��    \n");
				printf("       ��      \n");
				printf("       ��      \n");
				printf("       ��	   \n");
				printf("       ��      \n");
				break;
			case(8):
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
			case(9):
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ��������  \n");
				printf("           ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
		}
		printf("\n");
		switch(b) {
			case(0):
				printf("��   ������    \n");
				printf("   ��      ����\n");
				printf("�� ��      ����\n");
				printf("�� ������  ����\n");
				printf("�� ������  ����\n");
				printf("�� ������  ����\n");
				printf("�� ������  ����\n");
				printf("     ������    \n");
				break;
			case(1):
				printf("������ ��������\n");
				printf("     ����      \n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("������ ��������\n");
				printf("     ������    \n");
				break;
			case(2):
				printf("���� ����������\n");
				printf("�� ������  ����\n");
				printf("�� ��      ����\n");
				printf("�������� ����  \n");
				printf("������ ����    \n");
				printf("���� ����������\n");
				printf("�� ������������\n");
				printf("�� ������������\n");
				break;
			case(3):
				printf("     ������    \n");
				printf("�� ��      ����\n");
				printf("�� ������  ����\n");
				printf("������ ����    \n");
				printf("��������   ����\n");
				printf("���������� ����\n");
				printf("�� ���� �� ����\n");
				printf("     ������    \n");
				break;
			case(4):
				printf("�������� ������\n");
				printf("������   ������\n");
				printf("������ ��������\n");
				printf("���� ����������\n");
				printf("�� ������������\n");
				printf("   ����������  \n");
				printf("�������� ������\n");
				printf("����   ������  \n");
				break;
			case(5):
				printf("   ����������  \n");
				printf("   ��          \n");
				printf("   ��          \n");
				printf("   ��������    \n");
				printf("   ��      ��  \n");
				printf("           ��  \n");
				printf("           ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
			case(6):
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��          \n");
				printf("   ��������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
			case(7):
				printf("   ����������  \n");
				printf("           ��  \n");
				printf("         ��    \n");
				printf("         ��    \n");
				printf("       ��      \n");
				printf("       ��      \n");
				printf("       ��	   \n");
				printf("       ��      \n");
				break;
			case(8):
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
			case(9):
				printf("     ������    \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("   ��      ��  \n");
				printf("     ��������  \n");
				printf("           ��  \n");
				printf("   ��      ��  \n");
				printf("     ������    \n");
				break;
		}
		color(7);
		printf("\n�����Ƿ������(Y/N)    ");
		scanf("%c",&loop);
		getchar();							//����س� 
		system("cls");
	} while(loop=='Y'||loop=='y');
}

