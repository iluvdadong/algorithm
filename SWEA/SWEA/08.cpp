// 8번 - 올바른 괄호

#include <iostream>
char arr[31];

int main() {

	int cnt = 0;
	scanf("%s", &arr);
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == '(')
			cnt++;
		else if(arr[i] == ')') {
			cnt--;
		}
		if (cnt < 0) break;
	}

	if (cnt == 0) printf("YES");
	else {
		printf("NO");
	}
}

