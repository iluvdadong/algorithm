#include <iostream>

int main() {

	int n, x, cnt = 0;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		x = i;
		for (int j = 2; j < x; j++) {
			if (x % j == 0) break;
			else {
				cnt++;
				break;
			}
		}
	}

	printf("%d", cnt);
}