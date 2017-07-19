#include<stdio.h>

//结构体，用来存储姓名和分数
struct student
{
	char name[21];
	int score;
};

//冒泡排序
int main(int argc, char const *argv[])
{
	struct student a[100], t;
	int i, j, n;
	//输入一个数n
	scanf("%d", &n);
	//循环读入n个人名和分数
	for (i = 1; i <= n; ++i)
	{
		scanf("%s %d", a[i].name, &a[i].score);
	}
	//按分数从高到低进行排序
	for (i = 1; i <= n-1; ++i)
	{
		for (j = 1; j <= n-i; ++j)
		{
			if (a[j].score<a[j+1].score)
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	//输出人名
	for (i = 1; i <= n; ++i)
	{
		printf("%s\n", a[i].name);	
	}
	getchar();getchar();
	return 0;
}