#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {

	char loop;
	int num,a,b,co1;
	do {
		srand( (unsigned) time (NULL));
		num = (rand()%49)+1;
		co1 = rand()%2;
		system("color 0f");
		printf("�����������������ȴ�������\n");
		sleep(2);
		a=num/10;
		b=num%10;
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
		printf("\n�����Ƿ������(Y/N)");
		scanf("%c",&loop);
		getchar();			//����س�
		system("cls");
	} while(loop=='Y'||loop=='y');
}

