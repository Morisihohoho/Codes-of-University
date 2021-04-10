#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	Student(int number = 0, string name = "0", double socre = 0, double team = 0);
	int number;
	string name;
	double score;
	double team;
	friend ostream& operator<<(ostream& os, const Student& t);
};
ostream& operator<<(ostream& os, const Student& t)
{
	os << t.number << endl << t.name << endl << t.score << endl << t.team << endl << endl;
	return os;
}
Student::Student(int a, string b, double c, double d)
{
	number = a;
	name = b;
	score = c;
	team = d;
}

void sort(Student A, Student B, Student C, Student D)
{
	Student arr[4];
	arr[0] = A;
	arr[1] = B;
	arr[2] = C;
	arr[3] = D;
	for (int n = 0; n < 4; n++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j].score < arr[j + 1].score)
				swap(arr[j], arr[j + 1]);
			else if (arr[j].score == arr[j + 1].score)
			{
				if (arr[j].number < arr[j + 1].number)
					swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int n = 0; n < 4; n++)
	{
		cout << arr[n];
	}
}
int main()
{
	Student A(202019, "第一名", 100.0, 80);
	Student B(202001, "并列第三", 90, 80);
	Student C(202090, "并列第三", 90, 80);
	Student D(202022, "第二名", 92, 80);
	sort(A, B, C, D);
	return 0;
}