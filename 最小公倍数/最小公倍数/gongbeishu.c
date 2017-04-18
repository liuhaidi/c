/*源文件：demo3_5.c*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	int x=1;
	printf("请输入三个大于零的正整数，数字之间用空格隔开：");
	scanf("%d %d %d",&a,&b,&c);
	for(x=1;;x++)
	{
		if(x%a==0&x%b==0&x%c==0)
			break;
	}
	printf("%d",x);
	system("PAUSE");
	return 0;
}