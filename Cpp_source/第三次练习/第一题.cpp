#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
	Book(string bookname = "C++高速退学plus", string author = "莫若燊", double price = 0, int number = 100) ;
	void display();
	void borrow();
	void restore();
private:
	string bookname;
	string author;
	double price;
	int number;
};
Book::Book(string str1, string str2, double a, int b)
{
	bookname = str1;
	author = str2;
	price = a;
	number = b;
}
void Book::display()
{
	cout << "书名:" << bookname << "\n";
	cout << "作者:" << author << "\n";
	cout << "价格:" << price << "\n";
	cout << "剩余:" << number << "本\n";
}
void Book::borrow()
{
	number--;
	cout << "当前图书数量为" << number << "本\n";
}
void Book::restore()
{
		cout << "当前图书数量为" << number << "本\n";
}	
int main()
{
	char input;
	Book Cplus("C++程序设计","陈教授:)", 100, 1000);
	while (1)
	{
		cin >> input;
		if (input == 'b')
			Cplus.borrow();
		else if (input == 'r')
			Cplus.restore();
		else if (input == 's')
			Cplus.display();
		else if (input == 'e')
			break;
	}
	return 0;
}