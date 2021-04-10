#include <stdio.h>//输出实心菱形
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n % 2 == 0)//偶数输入无法输出
	{
		printf("error");
	}
	else
	{
		printf("print\n");//上半部分找规律输出
		int line, star, space;
		for (line = 0; line <(n + 1) / 2; line++)
		{
			for (space = 0; space <n/2-line ; space++)
			{
				printf(" ");
			}
			
			for (star = 0; star < 2*line +1; star++)
			{
			
				printf("*");
			}
			printf("\n");
		}
		for (line = 1; line <= (n - 1) / 2; line++)//下半部分找规律输出
		{
			for (space = 0; space < line; space++)
			{
				printf(" ");
			}
			for (star = 0; star < n - 2 * line; star++)
			{
				printf("*");
			}
			printf("\n");
		}
	
	
	}
	return 0;
}

