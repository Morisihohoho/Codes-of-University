#include<stdio.h>
int main()
{
	int a,b,c,f,g;
	char d;
	//这是识别码
	scanf("%d-%d-%d-%c",&a,&b,&c,&d);
	//输入ISBN
	f=a*1+(b/100)*2+(b%100/10)*3+(b%10)*4+(c/10000)*5+(c%10000/1000)*6+(c%10000%1000/100)*7+(c%10000%1000%100/10)*8+(c%10000%1000%100%10)*9;
	//分离位数以便计算ISBN校验码
	g=f%11;
	//计算ISBN校验码
	if(g==10&&d=='X')
		printf("Right");
	else if(g==(d-48)//利用ASCII码实现数字大小的比较)
		printf("Right");
	else if(g==10&&d!='X')
		printf("%d-%d-%d-X",a,b,c);
	else if(g!=(d-48))
		printf("%d-%d-%d-%d",a,b,c,g);
	return 0;
}

