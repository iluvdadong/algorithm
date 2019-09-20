//2007

#include <iostream>
char arr[31];

int main() {

	freopen("input.txt", "rt", stdin);
	scanf("%s", &arr);

	for (int i = 0; arr[i] != '\0'; i++) {
		for (int j = i + 1; arr[j] != '\0'; j++) {
			if (arr[i] == arr[j]) {
				break;
			}
		}
	}

}