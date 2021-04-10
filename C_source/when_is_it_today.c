#include<stdio.h>
int main()
{
	int year, month, day, year1 = 1900, total=0;
	scanf("%d-%d-%d", &year, &month, &day);
	for (year1;year1<year;year1++)
	{
		if ((year1 % 4 == 0&&year1%100!=0)||year1%400==0)
			total = total+366;
		else
			total =total +365;
	}//计算有几年的天数
	if ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0)
	{
		switch (month)
		{
		case 1: total = total +day;  break;
		case 2:total = total + (31 + day);  break;
		case 3:total = total + (60 + day); break;
		case 4:total = total + (91 + day); break;
		case 5:total = total + (121 + day); break;
		case 6:total= total + (152 + day); break;
		case 7:total = total + (182 + day); break;
		case 8:total = total + (213 + day);  break;
		case 9:total = total + (244 + day);  break;
		case 10:total = total + (274 + day);  break;
		case 11:total = total + (305 + day);  break;
		case 12:total = total + (335 + day);  break;
		}
	}
	else
	{
		switch (month)
		{
		case 1: total = total+day;  break;
		case 2:total = total +(31 + day);  break;
		case 3:total = total +(59 + day); break;
		case 4:total = total +(90 + day); break;
		case 5:total = total +(120 + day); break;
		case 6:total = total +(151 + day); break;
		case 7:total = total +(181 + day); break;
		case 8:total = total +(212 + day);  break;
		case 9:total = total +(243 + day);  break;
		case 10:total = total +(273 + day);  break;
		case 11:total = total +(304 + day);  break;
		case 12:total = total +(334 + day);  break;
		}
	}
		int m;
		m = total % 7;
		switch (m)
		{
		case 0:printf("Sunday"); break;
		case 1:printf("Monday"); break;
		case 2:printf("Tuesday"); break;
		case 3:printf("Wendnesday"); break;
		case 4:printf("Thursday"); break;
		case 5:printf("Friday"); break;
		case 6:printf("Saturday"); break;
		}
	//天数除7就是星期几，注意闰年有世纪闰年（400的倍数）。但是，是4的倍数，也是100的倍数，但不是400的倍数，不是闰年。
	//如1900不是闰年，2000就是闰年。
	return 0;
}




