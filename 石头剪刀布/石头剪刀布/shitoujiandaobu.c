/*Դ�ļ���demo3_5.c*/
/*
 * ˵������ȭ��Ϸ
 * ������������
 * ѧ�ţ�2016011630
 * �༶��7��
 * ���ڣ�2017/05/05
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i,num;
	srand(time(0));
	printf("�����ȳ���1��ʯͷ 2������ 3���� 4���˳�����\n");
	scanf("%d",&i);
	while(i!=1&&i!=2&&i!=3&&i!=4)
	{
		printf("�����������������");
		scanf("%d",&i);
	}
	switch (i)
	{
	case 1:
		num = rand()%3+1;
		switch (num)
		{   
		case 1:printf("���� ʯͷ\n���Գ� ʯͷ\nƽ��");
			break;
		case 2:printf("���� ʯͷ\n���Գ� ����\n��ʤ");
			break;
		case 3:printf("���� ʯͷ\n���Գ� ��\n����ʤ");
			break;
		}
		break;
	case 2:
		num = rand()%3+1;
		switch (num)
		{   
		case 1:printf("���� ����\n���Գ� ʯͷ\n����ʤ");
			break;
		case 2:printf("���� ����\n���Գ� ����\nƽ��");
			break;
		case 3:printf("���� ����\n���Գ� ��\n��ʤ");
			break;
		}
		break;
	case 3:
		num = rand()%3+1;
		switch (num)
		{   
		case 1:printf("���� ��\n���Գ� ʯͷ\n��ʤ");
			break;
		case 2:printf("���� ��\n���Գ� ����\n����ʤ");
			break;
		case 3:printf("���� ��\n���Գ� ��\nƽ��");
			break;
		}
		break;
	default:
		printf("�ټ���");
		break;
	}
	system("pause");
	return 0;
}
