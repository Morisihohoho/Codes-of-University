#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	int m, n, square[MAX][MAX] = { 0 }, num[MAX] = { 0 }, max, min, count = 0;
	cout << "ÇëÊäÈë¾ØÕóµÄ½×Êý:";
	cin >> m >> n;
	cout << "ÇëÊäÈë¾ØÕó£º";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> square[i][j];
		}
	}
	int i = 0, j = 0, line = 0, row = 0;
	for (i = 0; i < m; i++)
	{
		max = square[i][j];
		for (j = 0; j < n; j++)
		{
			if (square[i][j] >= max)
			{
				max = square[i][j];
				line = j;
			}
		}
		min = square[i][line];
		for (row; row < m; row++)
		{
			if (min > square[row][line])
			{
				row = 0;
				min = 0;
				break;
			}
		}
		row = 0;
		if (max == min)

		{
			num[i] = max;
			count++;
		}
	}
	if (count != 0)
	{
		for (int t = 0; t < count; t++)
			cout << num[t] << " ";
	}
	else
		cout << "no";
	return 0;
}