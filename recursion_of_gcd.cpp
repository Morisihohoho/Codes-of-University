#include<iostream>
using namespace std;
long long gcd(long long,long long);
int main()
{
	long long a, b, c,n;
	cin >> a >> b >> c;
	long long mid;
	if (a > b)
	{
		mid = b;
		b = a;
		a = mid;
	}
	if (a > c)
	{
		mid = c;
		c = a;
		a = mid;
	}
	if (b > c)
	{
		mid = c;
		c = b;
		b = mid;
	}
	n = gcd(a,c);
	cout << a/n<<"/"<<c/n;
	return 0;

}
long long gcd(long long a, long long c)
{
	return a == 0 ? c : gcd(c % a, a);
	//�ú���ᣬ�ݹ飡
	//���Լ������ĳ�С�ģ�һֱ����ֱ������Ϊ�㣬�Ǹ�С�ľ������Լ����
}

