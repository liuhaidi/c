/*
 * 说明：字符转换
 * 姓名：刘海迪
 * 学号：2016011630
 * 班级：7班
 * 日期：2017/03/15
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char x,y,z;
	printf("请输入x,y,z:");
	scanf("%c %c %c",&x,&y,&z);
	printf("%hhd ",x);
	printf("%hhd ",y);
	printf("%hhd\n",z);
	x-=32;
	y-=32;
	z-=32;
	printf("%c %c %c",x,y,z);
	system("pause");
	return 0;
}
