#include <stdio.h>
int main()
{
	int x = 0;   
	int i = 0;
	for (x = 2; x < 10000; x++)    //在2到10000之间找质数
	{
		for (i = 2; i < x; i++)   //试除法，能不能被x整除，从2开始找，直到等于x
		{
			if (x % i == 0)   //找到能被x整除的数了
			{
				break;
			}
		}
		if (x == i)   //找到和x相等也没有被整除的，证明是质数
		{
			printf("%d ",x);
		}
	}
	printf("\n\n\n");
	return 0;
}
/*求1--1000内的质数（素数）*/
