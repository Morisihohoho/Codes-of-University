#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (n; n > 0; n--)
	{
		int num;
		scanf("%d", &num);
		for (int k = 2; k <num; k++)//辗转相除法
		{
			while (k != num)
			{
				if (num % k == 0)
				{
					printf("%d*", k);
					num = num / k;
				}
				else break;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}
