#include <stdio.h>

//桶排序
int main(int argc, char const *argv[])
{
	int book[1001], i, j, t, n;
	for (int i = 0; i <= 1000; ++i)
	{
		book[i] = 0;
	}
	//输入一个数n，表示接下来有n个数
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		//把每个数读到变量t中
		scanf("%d", &t);
		//进行计数，对编号为t的桶放一个小旗子
		book[t]++;
	}
	//从大到小
	for (i = 1000; i >= 0; --i)
	{
		//出现几次就将桶的编号打印几次
		for (int j = 1; j <= book[i]; ++j)
		{
			printf("%d ", i);
		}
	}
	//getchar()用来暂停程序，以便查看程序输出的内容
	getchar();getchar();
	return 0;
}