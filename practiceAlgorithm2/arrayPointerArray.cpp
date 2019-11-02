// 1) 포인터 배열
// 2) 배열 포인터


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

/* 1) 포인터 배열

- 포인터 들의 배열
- 배열의 요소가 포인터들로 이루어져있다.

*/

// char * arr[3];
//- 배열 요소의 자료형이 char* (포인터)인 배열
//- 그 배열의 요소의 개수가 3개

	const char* arr[3];
	
	arr[0] = "Dahae";
	arr[1] = "is";
	arr[2] = "Programmer";

	for (int i = 0; i < 3; i++)
		printf("%s ", arr[i]);

	// "Dahae is Programmer"

	printf("%\n");


/* 2) 배열 포인터

- 배열을 가리키는 포인터
- "특정 사이즈"의 배열 만! 가리킬 수 있는 포인터

*/

	//3크기의 배열만 가리킬 수 있는 포인터 arr2
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
