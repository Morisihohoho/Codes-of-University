#include<iostream>
#include<cstring>
using namespace std;
void insert(char[]);
int main()
{
	const int max = 10000;
	char str[max] = { 0 };
	cin.getline(str, max);
	insert(str);
	return 0;
}
void insert(char str[])
{
	for (int i = 0; i < (int)strlen(str); i++)
	{
		cout << str[i];
		cout << "t";
	}
}