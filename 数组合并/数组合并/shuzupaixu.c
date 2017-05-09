/*源文件：demo3_5.c*/
/*
 * 说明：数组合并
 * 姓名：刘海迪
 * 学号：2016011630
 * 班级：7班
 * 日期：2017/05/04
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int arr1[4]={3,6,9,11},arr2[5]={1,3,8,45,89},arr3[8];
	int i=0,j=0,k=0;
    while(i<4&&j<5)
	{
	if(arr1[i]<arr2[j])
	{
		arr3[k]=arr1[i];
	    i++;
		k++;
	}
	if(arr1[i]>=arr2[j])
	{
		arr3[k]=arr2[j];
		j++;
		k++;
	}
	}
	printf("%d",arr3[k]);
	system("pause");
	return 0;
}
	