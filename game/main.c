#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#include <windows.h>
void color(const unsigned short textColor)      //�Զ��庯���ݲ����ı���ɫ 
{
    if(textColor>=0 && textColor<=15)     //������0-15�ķ�Χ��ɫ
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //��һ���������ı�������ɫ
    else   //Ĭ�ϵ�������ɫ�ǰ�ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main()
{

	int a,b,sum ;
	srand( (unsigned) time (NULL)) ; 
	a = rand()%200 ;
	sum = 8 ;
	printf ("������һ�����֣���Χ0~200����") ;
	
	while(1)
	{
		sum-- ;		
		scanf ("%d", &b) ;
		if (b>a)
		{
			if (sum == 0)
			{
				sleep (1) ;
				system ("cls") ;
				printf ("���ź����㻹��ÿ���\n��ȷ���ǣ� %d\n \n" , a) ; 
				printf (" ���õĳƺ��ǣ�\n   ") ;
				color (12) ;
				printf (" �����") ;
				color (7) ;
				return 0 ;
			 }
			printf ("���� ֻ��%d�λ����� ��ϧ��С��\n��������һ�����֣�"  , sum) ;
		 }
		if (b<a)
		{
			if (sum == 0)
			{
				sleep (1) ;
				system ("cls") ;
				printf ("���ź����㻹��ÿ���\n��ȷ���ǣ� %d\n \n" , a) ; 
				printf (" ���õĳƺ��ǣ�\n   ") ;
				color (12) ;
				printf (" �����") ;
				color (7) ;
				return 0 ;
		 	}
			printf ("С�� ֻ��%d�λ����� ��ϧ��С��\n��������һ�����֣�" , sum) ;
		 }
		if (b == a)
		{
			system ("cls") ;
			printf ("��ϲ�㣬����ˣ����� \n \n") ; 
			printf (" ���õĳƺ��ǣ�\n   ") ;
			if (sum < 8 && sum >= 6)
			{
				color (6) ; 
				printf ("   ��ŷ��") ;
				color (7) ;
				break ;
			 }
			if (sum < 6 && sum >= 3)
			{
				color (6) ; 
				printf ("   ŷ��") ;
				color (7) ;
				break ;
			 }
			if (sum < 3 && sum >= 1)
			{
				color (12) ;
				printf ("   ����") ; 
				color (7) ;
				break ;
			 }
			if (sum == 0) 
			{
				color (12) ; printf ("   �����") ;
				color (7) ;
				break ; 
			 }
			break ;
		}
		
	 }	
	return 0;
 }	

/*
1~2�β�����  ����ŷ�� ����

3~5����  ��ŷ�� ���� 

6~7����  ������ ���� 

7~8��(����δ����)��  ������� ���� 
*/
