#include<stdio.h>
#include<string.h>
int main()//芜湖，指针版
{
	char* p,*o, a[256];
	gets(a);
	int i = (int)strlen(a);
	for (o=p = a; p <= &a[i]; p++)
	{
		if (*p == ' '||*p=='\0')//指针遍历
		{
			o = p;
			for (--p; p >= &a[0]; p--)//指针回退
			{
				if (*p == ' ')
					goto A;
				printf("%c", *p);
			}
		A:p = o;//重置指针
			printf(" ");//打印空格
		}
	}
	return 0;
}

