#include<iostream>
using namespace std;
void reverse(int[], int);
int main()
{
	int n;
	cin >> n;
	const int max = 100000;
	int num[max] = { 0 };
	int m = n * 10;
	for (int i = 0; i < m; i++)
		cin >> num[i];
	reverse(num, m);
	return 0;
}
void reverse(int num[], int m)
{
	int count = 0;
	for (int i = 9; i >= 0; i--)
	{
		cout << num[i];
		m--;
		count++;
		if (m == 0)
			break;
		if (count % 10 == 0 && m != 0)
		{
			cout << "\n";
			i = count + 10;
		}
	}
}