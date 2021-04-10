#include <stdio.h>
#include <string.h>
//找出落单的数字
int main() {
	int n, B, I = 0;
	scanf("%d\n", &n);
	int nums[n];//输入有几个数字，题设规定只能是奇数个
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
shit:
	I++;

	for (int II = 0; II < n; II++) {
		if (nums[I] == nums[II] && II != I)//找到了配对的且不是同一个数，用另外一个比。（递归）
			goto shit;
		if ( II == n - 1 ) {//循环完了都没有找到配对，就是落单的数。
			B = I;
			goto Holyshit;
		}

	}



Holyshit:
	printf("%d", nums[B]);
	return 0;
}
