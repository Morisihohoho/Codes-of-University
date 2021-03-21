#include<stdio.h>//插入排序，每排序一趟输出一次结果
void swap(int *a, int *b)//交换函数
{
	int c;
		c=*a;
	*a = *b;
	*b = c;
}
int main()
{
	int n, num[64] = { 0 }, row = 0, time = 0;
	scanf("%d", &n);
	int N = 1;
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	printf("%d\n", num[0]);
	if (n > 1)//插入排序
	{
	A:if (num[N] <= num[N - 1])
	{
		swap(&num[N], &num[N - 1]);
	}
	N--;
	if (N  > 0)
	{
		goto A;
	}//每一趟儿到这结束
	else
	{
		row++;
		for (int i = 0; i <= row; i++)
			printf("%d ", num[i]);
		printf("\n");
		N = row + 1;
	}//打印每一趟儿的结果
	if (row < n - 1)
	{
		goto A;
	}//检查行数是否正确，不正确继续循环
	}
	return 0;
}


