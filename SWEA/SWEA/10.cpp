#include<stdio.h>

int digit_sum(int x) {
	int sum = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		sum = sum + tmp;
		x = x / 10;
	}
	return sum;
}

int main() {
	freopen("input.txt", "rt", stdin);
	int n, num, i, sum, max = -2147000000, res;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
	}
	printf("%d\n", res);
	return 0;
}