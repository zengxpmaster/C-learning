
#include <stdio.h>
gongyue(int num1, int num2)//求num1和num2的公约数
{
int temp,x,y;
	if(num1<num2){
	temp=num1;num1=num2;num2=temp;}
	x=num1;y=num2;
	while(y!=0){
	temp=x%y;x=y;y=temp;}
	return x;
}
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c= gongyue(a,b);
	printf("最大公约数=%d\n",c);
	return 0;
}




