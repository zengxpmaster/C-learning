#include<stdio.h>
int main()
{
	int jw , dd , xs , xb , source , i;
	printf("请分别输入 教务处评分，督导处评分，学生评分和系部自评分：");
	LOOP :do                                                         				/*循环*/
	{
		scanf("%d,%d,%d,%d",jw,dd,xs,xb);
		if(jw>=0&&jw<=100&&dd>=0&&dd<=100&&xs>=0&&xs<=100&&xb>=0&&xb<=100)
		{
			source=jw*0.1+dd*0.1+xs*0.5+xb*0.3;                                /*计算教师评分*/
			printf("教师评分为%f\n",source);
			if(source>=90)	       												/*计算评定等级*/
			{
				printf("您的评定等级为优秀！\n");
				return 0;
			}else if(source>=70)
			{
				printf("您的评定等级为称职！\n");
				return 0;
			}else
			{
				printf("您的评定等级为不称职！\n");
				return 0;
			}
		}else			     												 /*成绩无效时*/
		printf("输入的成绩无效，请重新输入！\n");
		goto LOOP ;
	}while(i==0);
	return 0; 
}
	
	

