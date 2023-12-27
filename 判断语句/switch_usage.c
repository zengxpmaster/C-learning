#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b;
	printf("请输入成绩：");
	scanf("%d",&a);
	while(a<0||a>100){
		printf("输入成绩无效！\n请重新输入：");
		scanf("%d",&a);
	}
	b=a/10; 
	switch(b){
	case 10:
		printf("该名老师的成绩等级A。");
		break;
	case 9:
		printf("该名老师的成绩等级A。");
		break;
	case 8:
		printf("该名老师的成绩等级B。");
		break;
	case 7:
		printf("该名老师的成绩等级C。");
		break;
	case 6:
		printf("该名老师的成绩等级D。");
		break;
	default :
		printf("该名老师的成绩等级E。");
		break;
	}
	return 0;
}
