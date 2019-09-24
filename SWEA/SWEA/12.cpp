//#include <iostream>
//int arr[11];
//
//int main() {
//
//	int n, x, temp, res=0;
//	scanf("%d", &n);
//	
//	for (int i = 1;i <= n; i++) {
//		x = i;
//		while (x > 0) {
//			temp = x % 10;
//			arr[temp]++;
//			x = x / 10;
//		}
//	}
//
//	for (int i = 0; i <= 9; i++) {
//		res = res + arr[i];
//	}
//	printf("%d", res);
//}

#include<stdio.h>

int main() {

	freopen("input.txt", "rt", stdin);

	int n, sum = 0, cnt = 1, digit = 9, res = 0;

	scanf("%d", &n);

	while (sum + digit < n) {
		sum = sum + digit;
		res = res + (cnt * digit);
		cnt++;
		digit = digit * 10;
	}

	res = res + ((n - sum) * cnt);
	printf("%d\n", res);
	return 0;

}
