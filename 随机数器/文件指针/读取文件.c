#include <stdio.h>
int main()
{
    int v[100];//��һ���㹻������顣
    int i = 0, j;
    FILE *fp;//�ļ�ָ��
 
    fp = fopen("classes.txt", "r");//���ı���ʽ���ļ���
    if(fp == NULL){     //���ļ�����
		printf("�ļ���ʧ��");
		return -1;
	}     
    while(fscanf(fp, "%d", &v[i]) != EOF) //��ȡ���ݵ����飬ֱ���ļ���β(����EOF)
        i++;
    fclose(fp);//�ر��ļ�
 
    for(j = 0; j < i; j ++)//ѭ���������Ԫ�ء�
    {
        printf("%d ", v[j]);
    }
    return 0;
}
