#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#include <windows.h>
void color(const unsigned short textColor)      //自定义函根据参数改变颜色 
{
    if(textColor>=0 && textColor<=15)     //参数在0-15的范围颜色
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //用一个参数，改变字体颜色
    else   //默认的字体颜色是白色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main()
{

	int a,b,sum ;
	srand( (unsigned) time (NULL)) ; 
	a = rand()%200 ;
	sum = 8 ;
	printf ("请输入一个数字（范围0~200）：") ;
	
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
				printf ("真遗憾，你还是每答对\n正确答案是： %d\n \n" , a) ; 
				printf (" 你获得的称号是：\n   ") ;
				color (12) ;
				printf (" 大非酋") ;
				color (7) ;
				return 0 ;
			 }
			printf ("大了 只有%d次机会啦 珍惜吧小子\n请输入再一个数字："  , sum) ;
		 }
		if (b<a)
		{
			if (sum == 0)
			{
				sleep (1) ;
				system ("cls") ;
				printf ("真遗憾，你还是每答对\n正确答案是： %d\n \n" , a) ; 
				printf (" 你获得的称号是：\n   ") ;
				color (12) ;
				printf (" 大非酋") ;
				color (7) ;
				return 0 ;
		 	}
			printf ("小了 只有%d次机会啦 珍惜吧小子\n请输入再一个数字：" , sum) ;
		 }
		if (b == a)
		{
			system ("cls") ;
			printf ("恭喜你，答对了！！！ \n \n") ; 
			printf (" 你获得的称号是：\n   ") ;
			if (sum < 8 && sum >= 6)
			{
				color (6) ; 
				printf ("   大欧皇") ;
				color (7) ;
				break ;
			 }
			if (sum < 6 && sum >= 3)
			{
				color (6) ; 
				printf ("   欧皇") ;
				color (7) ;
				break ;
			 }
			if (sum < 3 && sum >= 1)
			{
				color (12) ;
				printf ("   非酋") ; 
				color (7) ;
				break ;
			 }
			if (sum == 0) 
			{
				color (12) ; printf ("   大非酋") ;
				color (7) ;
				break ; 
			 }
			break ;
		}
		
	 }	
	return 0;
 }	

/*
1~2次猜中是  “大欧皇 ”；

3~5次是  “欧皇 ”； 

6~7次是  “非酋 ”‘ 

7~8次(包含未猜中)是  “大非酋 ”； 
*/
