/*Դ�ļ���demo3_5.c*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n=1;
	float h=100,s=0;
	for(n=1;n<=10;n++)
	{
		h=h/2;
	    s=s+h;
		printf("��%d�η����߶ȣ�%.6f\n",n,h);
	}
		printf("С����ܷ����߶ȣ�%6f",s);

		system("PAUSE");
		return 0;
}