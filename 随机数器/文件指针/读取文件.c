#include <stdio.h>
int main()
{
    int v[100];//开一个足够大的数组。
    int i = 0, j;
    FILE *fp;//文件指针
 
    fp = fopen("classes.txt", "r");//以文本方式打开文件。
    if(fp == NULL){     //打开文件出错。
		printf("文件丢失！");
		return -1;
	}     
    while(fscanf(fp, "%d", &v[i]) != EOF) //读取数据到数组，直到文件结尾(返回EOF)
        i++;
    fclose(fp);//关闭文件
 
    for(j = 0; j < i; j ++)//循环输出数组元素。
    {
        printf("%d ", v[j]);
    }
    return 0;
}
