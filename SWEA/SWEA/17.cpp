// 17¹ø ¼±»ı´ÔÄûÁî

#include <iostream>

int main() {

	int n, m, ans, sum;
	scanf("%d", &n);

	while (n--) {
		
		sum = 0;
		scanf("%d %d", &m, &ans);

		for (int i = 1; i <= m; i++) {
			sum += i;
		}
		if (ans == sum) printf("YES\n");
		else printf("NO\n");
	}

}