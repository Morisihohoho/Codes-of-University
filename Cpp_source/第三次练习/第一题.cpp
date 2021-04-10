#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
	Book(string bookname = "C++������ѧplus", string author = "Ī����", double price = 0, int number = 100) ;
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
	cout << "����:" << bookname << "\n";
	cout << "����:" << author << "\n";
	cout << "�۸�:" << price << "\n";
	cout << "ʣ��:" << number << "��\n";
}
void Book::borrow()
{
	number--;
	cout << "��ǰͼ������Ϊ" << number << "��\n";
}
void Book::restore()
{
		cout << "��ǰͼ������Ϊ" << number << "��\n";
}	
int main()
{
	char input;
	Book Cplus("C++�������","�½���:)", 100, 1000);
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