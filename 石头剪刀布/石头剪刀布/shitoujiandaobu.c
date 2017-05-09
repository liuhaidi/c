/*源文件：demo3_5.c*/
/*
 * 说明：猜拳游戏
 * 姓名：刘海迪
 * 学号：2016011630
 * 班级：7班
 * 日期：2017/05/05
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i,num;
	srand(time(0));
	printf("请您先出（1：石头 2：剪刀 3：布 4：退出）：\n");
	scanf("%d",&i);
	while(i!=1&&i!=2&&i!=3&&i!=4)
	{
		printf("输入错误，请重新输入");
		scanf("%d",&i);
	}
	switch (i)
	{
	case 1:
		num = rand()%3+1;
		switch (num)
		{   
		case 1:printf("您出 石头\n电脑出 石头\n平局");
			break;
		case 2:printf("您出 石头\n电脑出 剪刀\n您胜");
			break;
		case 3:printf("您出 石头\n电脑出 布\n电脑胜");
			break;
		}
		break;
	case 2:
		num = rand()%3+1;
		switch (num)
		{   
		case 1:printf("您出 剪刀\n电脑出 石头\n电脑胜");
			break;
		case 2:printf("您出 剪刀\n电脑出 剪刀\n平局");
			break;
		case 3:printf("您出 剪刀\n电脑出 布\n您胜");
			break;
		}
		break;
	case 3:
		num = rand()%3+1;
		switch (num)
		{   
		case 1:printf("您出 布\n电脑出 石头\n您胜");
			break;
		case 2:printf("您出 布\n电脑出 剪刀\n电脑胜");
			break;
		case 3:printf("您出 布\n电脑出 布\n平局");
			break;
		}
		break;
	default:
		printf("再见！");
		break;
	}
	system("pause");
	return 0;
}
