#include<stdio.h>
int main()
{
	int row, col, all = 0, x = 1, y = 1;
	scanf("%d %d", &row, &col);
	int ROW = row, COL = col;
	int square[100][100];
	for (int I = 0; I < row; I++)
	{
		for (int i = 0; i < col; i++)
		{
			scanf("%d", &square[I][i]);
		}
	}
	if (row == 1)//按矩阵格式输出矩阵
	{
		for (int I = 0; I < col; I++)
		{
			printf("%d ", square[0][I]);
		}
		printf("\n");
		for (int I = 0; I < col; I++)
		{
			printf("%d ", square[0][I]);
		}
	}
	else if (col == 1)
	{
		for (int I = 0; I < row; I++)
			printf("%d\n", square[I][0]);
		for (int I = 0; I < row; I++)
			printf("%d ", square[I][0]);
	}
	else
	{
		for (int I = 0; I < row; I++)
		{
			for (int i = 0; i <= col; i++)
			{
				if (i < col)
					printf("%d ", square[I][i]);
				else
					printf("\n");
			}
		}
		int a = 0, b = 0;//第一圈逆时针遍历
		for (b; b < row; b++)
		{
			printf("%d ", square[b][a]);
			all++;
		}
		a++;
		for (a; a < col; a++)
		{
			printf("%d ", square[b - 1][a]);
			all++;
		}
		for (b; b - 2 >= 0; b--)
		{
			printf("%d ", square[b - 2][a - 1]);
			all++;
		}
		for (a; a - 2 > 0; a--)
		{
			printf("%d ", square[b - 1][a - 2]);
			all++;
		}
		a = x; b = y;
		row = row - 2;
		col = col - 2;
		if (row == 0 || col == 0)//只有遍历一圈直接结束
			goto end;
		if (row == 1 && col != 1)//非正方形的矩形输出剩下的几个
		{
			for (a; a <= col; a++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
		}
		else if (row == 1 && col == 1)//正方形矩形输出最中间的那一个
		{
			printf("%d", square[a][b]);
			all++;
		}
		else if (col == 1 && row != 1)//同非正方形矩形情况
		{
			for (b; b <= row; b++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
		}
		else//还要转一圈的话，走第二遍循环（其实这步可以合并到最后一步那里）
		{
			for (b; b < row; b++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
			for (a; a < col; a++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
			for (b; b > x; b--)
			{
				printf("%d ", square[b][a]);
				all++;
			}
			for (a; a > y; a--)
			{
				printf("%d ", square[b ][a ]);
				all++;
			}
		}
		if (all == ROW * COL)
			goto end;
		loop:x++; y++;//循环：大于一圈循环，一直转转转
		a = x; b = y;
		row = row - 2;
		col = col - 2;
		int m = row, n = col;
		if (row == 1 && col != 1)
		{
			for (a; a <= col; a++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
		}
		else if (row == 1 && col == 1)
		{
			printf("%d", square[a][b]);
			all++;
		}
		else if (col == 1 && row != 1)
		{
			for (b; b <= row; b++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
		}
		else
		{
			for (int I = 1; I < row; I++, b++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
			for (int I = 1; I < col; I++, a++)
			{
				printf("%d ", square[b][a]);
				all++;
			}
			for (m; m > 1; m--, b--)
			{
				printf("%d ", square[b][a]);
				all++;
			}
			for (n; n > 1; n--, a--)
			{
				printf("%d ", square[b][a]);
				all++;
			}
		}
		if (all != COL * ROW)//判断是否循环
			goto loop;
			end:return 0;
	}
}


