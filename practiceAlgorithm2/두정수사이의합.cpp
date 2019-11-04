//두정수사이의 합

#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;

	if (a < b) {
		int num = b - a + 1;
		for (int i = 1; i <= num; i++) {
			answer = answer + a;
			++a;
		}
	}
	else if (a > b) {
		int num = a - b + 1;
		for (int i = 1; i <= num; i++) {
			answer = answer + a;
			--a;
		}
	}
	else if (a == b) {
		return a;
	}

	return answer;
}

int main() {

	cout << solution(3, 5) << endl;
	cout << solution(3, 3) << endl;
	cout << solution(5, 3) << endl;

}