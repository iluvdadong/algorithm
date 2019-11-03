#include <iostream>
#include <string>
using namespace std;

string solution(int a, int b) {

	// 0 1 2 3 4 5 6
	string days[7] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
	int month[12] = { 31, 29, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31 };
	//1월은 31일로 시작
	//2월은 윤년이라 29일

	int countDays = 0;
	//a: 1월부터 4월까지 날짜 다 더함
	for (int i = 0; i < a - 1; i++) {
		countDays = countDays + month[i];
	}
	
	//b: 나머지 일수 더하기
	countDays = countDays + b - 1;
	return days[countDays % 7];
}

int main() {

	int a = 5;
	int b = 24;
	
	cout << solution(a, b) << endl;
}