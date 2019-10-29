#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[51][51];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0 ,-1 };

int main() {

	freopen("input.txt", "rt", stdin);
	int n, i, j, k, cnt = 0, flag;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			flag = 0;
			for (k = 0; k < 4; k++) {
				if (a[i + dx[k]][j + dy[k]] >= a[i][j]) {
					flag = 1; //������ġ���� �����¿쿡 ���ų� ū�� ������
					break; //���츮�� �ƴϱ� ������ �� ���ʿ� X
				}
			}
			if (flag == 0) cnt++;
		}
	}

	printf("%d\n", cnt);
	return 0;
}
