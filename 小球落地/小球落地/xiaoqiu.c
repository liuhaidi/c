/*源文件：demo3_5.c*/
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
		printf("第%d次反弹高度：%.6f\n",n,h);
	}
		printf("小球的总反弹高度：%6f",s);

		system("PAUSE");
		return 0;
}