// 09 - ����� ���
//1�� ����� ������ �ִ� ���ڵ�? => 1�� �����
//2�� ����� ������ �ִ� ���ڵ�? => 2�� �����
//3�� ����� ������ �ִ� ���ڵ�? => 3�� ����� . . . .
//. . . . . �̷��� n���� 

#include <iostream>
int cnt[50001];

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j = j+i) {
			cnt[j]++; //���� : cnt[j++]; �ƴ�!
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}