// 09 - 모두의 약수
//1을 약수로 가지고 있는 숫자들? => 1의 배수들
//2를 약수로 가지고 있는 숫자들? => 2의 배수들
//3을 약수로 가지고 있는 숫자들? => 3의 배수들 . . . .
//. . . . . 이렇게 n까지 

#include <iostream>
int cnt[50001];

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j = j+i) {
			cnt[j]++; //주의 : cnt[j++]; 아님!
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}