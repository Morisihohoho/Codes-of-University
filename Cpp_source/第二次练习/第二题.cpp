#include<iostream>
using namespace std;
class Date {
public:
	Date(int year = 1990, int month = 1, int day = 1);
	void setDate(int year, int month, int day = 1);
	void setYear(int year);
	int getYear();
	void setMonth(int month);
	int getMonth();
	void setDay(int day);
	int getDay();
	void printFullYear();
	void printStandardYear();
	int fullYearsTo(int year, int month, int day);
	int daysTo(int year, int month, int day);
private:
	int year;
	int month;
	int day;
	char separetor;
};
Date::Date(int _year, int _month, int _day)
{
	year = _year;
	month = _month;
	day = _day;
}
void Date::setDate(int ye, int mo, int da)
{
	year = ye;
	if (mo >= 1 && mo <= 12)
		month = mo;
	else
		month = 1;
	enum{Jan=1,Feb,Mar,Apri,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
	switch (mo)
	{
	case Jan:
	case Mar:
	case May:
	case Jul:
	case Aug:
	case Oct:
	case Dec:
	{
		if (da >= 1 && da <= 31)
			day = da;
		else
			day = 1;
		break;
	}
	case Apri:
	case Jun:
	case Sep:
	case Nov:
	{
		if (da >= 1 && da <= 30)
			day = da;
		else day = 1;
		break;
	}
	case Feb:
	{
		if ((ye % 4 == 0&&ye%100!=0)||(ye%400==0))
		{
			if (da >= 1 && da <= 29)
				day = da;
			else
				day = 1;
		}
		else
		{
			if (da >= 1 && da <= 28)
				day = da;
			else
				day = 1;
		}
		break;
	}
	}
	if (da > 31)
		day = 1;
}
void Date::setYear(int ye)
{
	year = ye;
}
int Date::getYear()
{
	return year;
}
void Date::setMonth(int mo)
{
	if (mo >= 1 && mo <= 12)
		month = mo;
	else
		month = 1;
}
int Date::getMonth()
{
	return month;
}
void Date::setDay(int da)
{
	enum { Jan = 1, Feb, Mar, Apri, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
	switch (month)
	{
	case Jan:
	case Mar:
	case May:
	case Jul:
	case Aug:
	case Oct:
	case Dec:
	{
		if (da >= 1 && da <= 31)
			day = da;
		else
			day = 1;
		break;
	}
	case Apri:
	case Jun:
	case Sep:
	case Nov:
	{
		if (da >= 1 && da <= 30)
			day = da;
		else day = 1;
		break;
	}
	case Feb:
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			if (da >= 1 && da <= 29)
				day = da;
			else
				day = 1;
		}
		else
		{
			if (da >= 1 && da <= 28)
				day = da;
			else
				day = 1;
		}
		break;
	}
	}
	if (da > 31)
		day = 1;
}
int Date::getDay()
{
	return day;
}
void Date::printFullYear()
{
	printf("%d-%d-%d\n", year, month, day);
}
void Date::printStandardYear()
{
	int a, b;
	a = (year % 1000) % 100 / 10;
	b = year % 1000 % 100 % 10;
	printf("%d%d-%d-%d\n", a, b, month, day);
}
int Date::fullYearsTo(int ye, int mon, int da)
{
	int out;
	if (mon > month)
		out= ye - year;
	else if (mon == month)
	{
		if (da >= day)
			 out=ye - year;
		else
			out=ye - year - 1;
	}
	else if (mon < month)
	{
		out=ye - year - 1;
	}
	return out;
}
int Date::daysTo(int ye, int mo, int da)
{
	int count=0,mid=0,mid1=0,mid2=0;
	if (year >= ye)
	{
		mid = year;
		for (mid; mid > ye; mid--)
		{
			if ((mid % 4 == 0 && mid % 100 != 0) || (mid % 400 == 0))
			{
				count += 366;
			}
			else count += 365;
		};
		if (month >= mo)
		{
			mid1 = month;
			for (mid1; mid1 > mo; mid1--)
			{
				enum { Jan = 1, Feb, Mar, Apri, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
				switch (mid1)
				{
				case Jan:
				case Mar:
				case May:
				case Jul:
				case Aug:
				case Oct:
				case Dec:
				{
					count += 31;
					break;
				}
				case Apri:
				case Jun:
				case Sep:
				case Nov:
				{
					count += 30;
					break;
				}
				case Feb:
				{
					if ((ye % 4 == 0 && ye % 100 != 0) || (ye % 400 == 0))
					{
						count += 29;
					}
					else
					{

						count += 28;
					}
					break;
				}
				};
			};

		}
		else
		{
			mid1 = month;
			for (mid1; mid1 < mo; mid1++)
			{
				enum { Jan = 1, Feb, Mar, Apri, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
				switch (mid1)
				{
				case Jan:
				case Mar:
				case May:
				case Jul:
				case Aug:
				case Oct:
				case Dec:
				{
					count -= 31;
					break;
				}
				case Apri:
				case Jun:
				case Sep:
				case Nov:
				{
					count -= 30;
					break;
				}
				case Feb:
				{
					if ((ye % 4 == 0 && ye % 100 != 0) || (ye % 400 == 0))
					{
						count -= 29;
					}
					else
					{

						count -= 28;
					}
					break;
				}
				}
			}
		}
		if (day >= da)
		{
			mid2 = day;
			for (mid2; mid2 > da; mid2--)
			{
				count++;
			}
		}
		else
		{
			mid2 = day;
			for (mid2; mid2 < da; mid2++)
			{
				count--;
			}
		}
		count = -count;
	}
	else 
	{
		mid = year;
		for (mid; mid < ye; mid++)
		{
			if ((mid % 4 == 0 && mid % 100 != 0) || (mid % 400 == 0))
			{
				count += 366;
			}
			else count += 365;
		};
		if (month >= mo)
		{
			mid1 = month;
			for (mid1; mid1 > mo; mid1--)
			{
				enum { Jan = 1, Feb, Mar, Apri, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
				switch (mid1)
				{
				case Jan:
				case Mar:
				case May:
				case Jul:
				case Aug:
				case Oct:
				case Dec:
				{
					count -= 31;
					break;
				}
				case Apri:
				case Jun:
				case Sep:
				case Nov:
				{
					count -= 30;
					break;
				}
				case Feb:
				{
					if ((ye % 4 == 0 && ye % 100 != 0) || (ye % 400 == 0))
					{
						count -= 29;
					}
					else
					{

						count -= 28;
					}
					break;
				}
				};
			};

		}
		else
		{
			mid1 = month;
			for (mid1; mid1 < mo; mid1++)
			{
				enum { Jan = 1, Feb, Mar, Apri, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
				switch (mid1)
				{
				case Jan:
				case Mar:
				case May:
				case Jul:
				case Aug:
				case Oct:
				case Dec:
				{
					count += 31;
					break;
				}
				case Apri:
				case Jun:
				case Sep:
				case Nov:
				{
					count += 30;
					break;
				}
				case Feb:
				{
					if ((ye % 4 == 0 && ye % 100 != 0) || (ye % 400 == 0))
					{
						count += 29;
					}
					else
					{

						count += 28;
					}
					break;
				}
				}
			}
		}
		if (day >= da)
		{
			mid2 = day;
			for (mid2; mid2 > da; mid2--)
			{
				count--;
			}
		}
		else
		{
			mid2 = day;
			for (mid2; mid2 < da; mid2++)
			{
				count++;
			}
		}
		count = count + 1;
	}
	return count;
}
int main()
{
	Date birthDate(1969,8,11);
	birthDate.printFullYear();
	birthDate.printStandardYear();
	cout << birthDate.fullYearsTo(2010, 4, 15)<<",满 "<<birthDate.fullYearsTo(2010, 4, 15)<<"岁\n";
	cout << birthDate.daysTo(2010, 4, 15) << ",活了" << birthDate.daysTo(2010, 4, 15) << "天了\n";
	cout << birthDate.daysTo(1949, 10, 1) << ",共和国比我早诞生了" << birthDate.daysTo(1949, 10, 1) << "天\n";
	return 0;
}
