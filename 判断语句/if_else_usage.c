#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int a;
	printf("请输入成绩：");
	LOOP:							//loop循环起点 
	scanf("%d",&a);
	if (a>=0&&a<60){
		printf("该名老师的成绩等级为E。");
	}else if (a>=60&&a<70){
		printf("该名老师的成绩等级为D。");
	}else if (a>=70&&a<80){
		printf("该名老师的成绩等级为C。");
	}else if (a>=80&&a<90){
		printf("该名老师的成绩等级为B。");
	}else if (a>=90&&a<=100){
		printf("该名老师的成绩等级为A。");
	}else {
		printf("输入成绩无效！\n请重新输入：");
		goto LOOP; 
	}
	return 0;
}
