// 1) ������ �迭
// 2) �迭 ������


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

/* 1) ������ �迭

- ������ ���� �迭
- �迭�� ��Ұ� �����͵�� �̷�����ִ�.

*/

// char * arr[3];
//- �迭 ����� �ڷ����� char* (������)�� �迭
//- �� �迭�� ����� ������ 3��

	const char* arr[3];
	
	arr[0] = "Dahae";
	arr[1] = "is";
	arr[2] = "Programmer";

	for (int i = 0; i < 3; i++)
		printf("%s ", arr[i]);

	// "Dahae is Programmer"

	printf("%\n");


/* 2) �迭 ������

- �迭�� ����Ű�� ������
- "Ư�� ������"�� �迭 ��! ����ų �� �ִ� ������

*/

	//3ũ���� �迭�� ����ų �� �ִ� ������ arr2
	char(*arr2)[3];

	char tmp1[3] = { 'a','b','c' };
	char tmp2[3] = { '1', '2', '3' };

	arr2 = &tmp1;
	printf("%s\n", arr2);
	
	for (int i = 0; i < (int)sizeof(*arr2); i++)
		printf("%c ", (*arr2)[i]);
	
	printf("\n");
	
	return 0;

}
