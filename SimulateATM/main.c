#include <stdio.h>
#include<time.h>
#include <stdlib.h>
/**此程序是一个模拟ATM机工作原理的程序 
**/

int main()
 {
 	int a = 5000,num;
 
	do
{ 
	printf("   请选择你要办理的业务：\n1.取款 2.存款 3.查询余额 4.退出\n") ;
	int b,key,d;
	scanf("%d",&num); 	
	system("cls");


		switch(num)
		{
		case 1:
			printf("请输入取款金额：");
			scanf("%d",&b);
			a -= b;
			printf("请输入6位取款密码：");
			scanf("%6d",&key);
			sleep(1);
			printf("您的取款金额为%d元\n",b);
			sleep(3);
			printf("取款成功\n");
			sleep(2);
			system("pause");
			system("cls");
			break;
		case 2:
			printf("请放入钞票\n");
			srand( (unsigned) time (NULL)) ;
			int c = rand()%10 ;//这里是生成随机数 
	 		for(;c == 0;) //这里判断随机数整数是否为0
	 		{ c = rand()%10;
			 }
			d = c*100;
			a += d;
			sleep(8);
			printf("您已放入%d元\n",d);
			sleep(1);
			printf("正在验钞, 请稍后");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·\n");
			sleep(1);
			printf("您已成功存入%d元\n",d);
			sleep(2);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("正在查询, 请稍后");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·");
			sleep(1);
			printf("·\n");
			sleep(1);
			printf("您的余额为%d元\n",a);
			sleep(2);
			system("pause");
			system("cls");
			break;
		case 4:
			sleep(1);
			printf("正在退出\n");
			sleep(1);
			break;
		default:printf("error\n");
		}
}while(num<=3);
return 0; 
}
