#include <stdio.h>
#include <string.h>

int main() {
	int a, b;
	scanf("%d\n", &a);
	for (b = 0; b < a; b++)
	{
		char str[1024] = { 0 }, longest_word[1024] = { 0 }, longest_word2[1024] = { 0 };
		gets(str);
		int i = 0, len = 0, longestlen = 0, countlen = 0, num = 0;
		for (i; i < (int)strlen(str); i++)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ' || str[i] == '\0');
			else 
			{
				printf("Input Error\n");
				goto L;
			}

		}//判断输入是否合法，只能包含字母，且单词之间以空格隔开。
		for (i = 0; i < (int)strlen(str); i++) 
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				len++;

			}
			if (str[i] == ' ')
			{
				len = 0;

			}
			if (len > longestlen)
			{
				memset(longest_word, 0, 1024);
				longestlen = len;
				num = i;
				countlen = num - longestlen + 1;
				memcpy(longest_word, str + countlen, longestlen);//储存最长的单词

			}
			else if (len == longestlen)
			{
				num = i;
				countlen = num - longestlen + 1;
				memcpy(longest_word2, str + countlen, longestlen);
				strcat(longest_word, ",");
				strcat(longest_word, longest_word2);//储存多个最长的单词并拼上逗号
			}
		}
		printf("%s,\n", longest_word);//打印
L:
		i = 0;
	}
}
