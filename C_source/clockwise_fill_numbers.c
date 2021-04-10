#include <stdio.h>
int main()
{//这个题整的是个正方形
	int a[20][20], n, count, i, j, k, kend, lend;
	scanf("%d", &n);

	kend = n/ 2;//确定循环的圈数
	lend = n;
	count = 1;
	for (i = 0, j = 0, k = 0; k < kend; k++)//开始填数
	{
		a[i][j] = count++;

		for (j++; j < lend; j++)
			a[i][j] = count++;

		for (i++, j--; i < lend; i++)
			a[i][j] = count++;

		for (i--, j--; j >= k; j--)
			a[i][j] = count++;

		for (i--, j++; i > k; i--)
			a[i][j] = count++;

		i++; j++; lend--;
	}
	if (n % 2 != 0) a[i][j] = count;//奇数正方形填正中间那个数
	for (i = 0; i < n; i++)//打印出来
	{
		for (j = 0; j < n; j++)
			printf("%d    ", a[i][j]);
		printf("\n");
	}
}
