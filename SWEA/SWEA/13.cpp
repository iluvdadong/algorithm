// 13번 - 가장 많이 사용된 자릿수

#include <iostream>
char ch[101];
int cnt[101];

int main() {

	int temp=0, max=-2147000000, digit;

	scanf("%s", &ch);
	
	for (int i = 0; ch[i] != '\0'; i++) {
		digit = ch[i]-48;
		cnt[digit]++;
	}

	for (int i = 0; i <= 9; i++) {
		if (cnt[i] >= max) {
			if (i > temp) {
				temp = i;
				max = cnt[i];
			}
		}
	}
	printf("%d\n", temp);
	return 0;
}