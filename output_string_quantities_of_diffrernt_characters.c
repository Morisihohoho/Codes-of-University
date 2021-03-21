//输出一串字符串中字符，大小写字母，数字的个数。
#include<stdio.h>
#include<string.h>//引用Strcmp函数
int main()
{
	char a[1024];
	char str[5]= "exit";//字符串末尾结束符\0占一个位

	int nums = 0, LET = 0, let = 0, other = 0;
	for (;;)
	{
		gets(a);//scanf将空格作为结束输入。用gets
		if (strcmp(a, str) == 0)//strcmp 字符串比较函数
		{
			printf("End Of Input");
			break;
		}
		else
		{
			for (int i = 0; i < (int)strlen(a); i++)//数值类型强制转换；strlen扫描
				//字符串长度，直到遇到\0结束，并返回扫描所得的数值。
				//数组的第一位字符是[0];
			{
				if (a[i] >= '0' && a[i] <= '9')
					nums ++;
				else if (a[i] >= 'A' && a[i] <= 'Z')
					LET ++;
				else if (a[i] >= 'a' && a[i] <= 'z')
					let ++;
				else other ++;
			}
		}
		printf("%d,%d,%d,%d,\n", nums, LET, let, other);
		nums = 0, LET = 0, let = 0, other = 0;//归零，重复计数
	}
	return 0;
}



