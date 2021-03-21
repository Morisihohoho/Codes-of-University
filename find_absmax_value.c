#include<stdio.h>
#include<math.h>
int main()
{
	int nums[1024], a=1,M,N,MAX=0;
	scanf("%d", &nums[0]);
	for (int i = 0; i < nums[0]; i++)//最开始一个数是决定后面要输入几个数
	{
		scanf("%d", &nums[a]);
			a++;
	}
	for (int b = 1; b <= nums[0]; b++)//算绝对值最大的数
	{
		for (int c = 1; c <= nums[0]; c++)
		{
			M = nums[b]; N = nums[c];
			if (abs(M) >= abs(N) && abs(M) > abs(MAX))
				MAX = M;
			else if (abs(M) <= abs(N) && abs(N) > abs(MAX))
				MAX = N;
			else
				MAX = MAX;
		}
	}
	printf("%d", MAX);
	return 0;
}
