/*Դ�ļ���demo3_5.c*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char th;
	int i=0;
	printf("������һ���ַ���\n");
	scanf("%c",&th);
	for(i=1;th>=1;th=th/2)
	{
		if(th==1)
		i++;
	}
    printf("%d",i);
	return 0;
}