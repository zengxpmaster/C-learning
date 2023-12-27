#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void color(const unsigned short textColor) {    //自定义函根据参数改变颜色
	if(textColor>=0 && textColor<=15)     //参数在0-15的范围颜色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //用一个参数，改变字体颜色
	else   //默认的字体颜色是白色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main(void) {
	char loop;
	int num,co,a,b,co1,i = 0,j,n;
	int v[100]={};							//开一个足够大的数组。
    FILE *fp;//文件指针
 
    fp = fopen("classes.txt", "r");			//以文本方式打开文件。
    if(fp == NULL){     					//打开文件出错。
		printf("文件丢失！");
		return -1;
	}     
    while(fscanf(fp, "%d", &v[i]) != EOF) 	//读取数据到数组，直到文件结尾(返回EOF)
        i++;
    fclose(fp);
    printf("输入班级号码： ");
    scanf("%d",&j);
	getchar();								//清除回车 
	n=v[j-1];
	do {
		srand( (unsigned) time (NULL));
		num = rand()%n;
		co1 = rand()%2;
		printf("正在生成随机数，请等待···\n");
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
				printf("　   正正正    \n");
				printf("   正      正　\n");
				printf("　 正      正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("     正正正    \n");
				break;
			case(1):
				printf("　　　 正　　　\n");
				printf("     正正      \n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("    正正正正    \n");
				break;
			case(2):
				printf("　　 正正正　　\n");
				printf("　 正　　  正　\n");
				printf("　 正      正　\n");
				printf("　　　　 正　  \n");
				printf("　　　 正　    \n");
				printf("　　 正　　　　\n");
				printf("　 正　　　　　\n");
				printf("　 正正正正正　\n");
				break;
			case(3):
				printf("     正正正    \n");
				printf("　 正      正　\n");
				printf("　 　　　  正　\n");
				printf("　　　 正正    \n");
				printf("　　　　   正　\n");
				printf("　　　　　 正　\n");
				printf("　 正　 　 正　\n");
				printf("     正正正    \n");
				break;
			case(4):
				printf("　　　　 正　　\n");
				printf("　　　   正　　\n");
				printf("　　　 正正　　\n");
				printf("　　 正　正　　\n");
				printf("　 正　　正　　\n");
				printf("   正正正正正  \n");
				printf("　　　　 正　　\n");
				printf("　　   正正正  \n");
				break;
			case(5):
				printf("   正正正正正  \n");
				printf("   正          \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("           正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(6):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(7):
				printf("   正正正正正  \n");
				printf("           正  \n");
				printf("         正    \n");
				printf("         正    \n");
				printf("       正      \n");
				printf("       正      \n");
				printf("       正	   \n");
				printf("       正      \n");
				break;
			case(8):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(9):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
		}
		printf("\n");
		switch(b) {
			case(0):
				printf("　   正正正    \n");
				printf("   正      正　\n");
				printf("　 正      正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("     正正正    \n");
				break;
			case(1):
				printf("　　　 正　　　\n");
				printf("     正正      \n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("     正正正    \n");
				break;
			case(2):
				printf("　　 正正正　　\n");
				printf("　 正　　  正　\n");
				printf("　 正      正　\n");
				printf("　　　　 正　  \n");
				printf("　　　 正　    \n");
				printf("　　 正　　　　\n");
				printf("　 正　　　　　\n");
				printf("　 正正正正正　\n");
				break;
			case(3):
				printf("     正正正    \n");
				printf("　 正      正　\n");
				printf("　 　　　  正　\n");
				printf("　　　 正正    \n");
				printf("　　　　   正　\n");
				printf("　　　　　 正　\n");
				printf("　 正　 　 正　\n");
				printf("     正正正    \n");
				break;
			case(4):
				printf("　　　　 正　　\n");
				printf("　　　   正　　\n");
				printf("　　　 正正　　\n");
				printf("　　 正　正　　\n");
				printf("　 正　　正　　\n");
				printf("   正正正正正  \n");
				printf("　　　　 正　　\n");
				printf("　　   正正正  \n");
				break;
			case(5):
				printf("   正正正正正  \n");
				printf("   正          \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("           正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(6):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(7):
				printf("   正正正正正  \n");
				printf("           正  \n");
				printf("         正    \n");
				printf("         正    \n");
				printf("       正      \n");
				printf("       正      \n");
				printf("       正	   \n");
				printf("       正      \n");
				break;
			case(8):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(9):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
		}
		color(7);
		printf("\n请问是否继续？(Y/N)    ");
		scanf("%c",&loop);
		getchar();							//清除回车 
		system("cls");
	} while(loop=='Y'||loop=='y');
}

