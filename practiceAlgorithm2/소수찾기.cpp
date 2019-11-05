#include <iostream>
#include <vector>
using namespace std;

int solution(int n) {

	int answer = 0;
	vector<int> arr(n + 1);

	for (int i = 2; i < arr.size(); i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) //이미 i의 배수들은 다 0으로 체크됐기에 다음 for문 바로 진행
			continue;
		for (int j = i * 2; j <= n; j = j + i) {
			arr[j] = 0;
		}
	}
	
	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) //0이 아니라는 것은 어떤것의 배수로도 나눠지지않은 것
			answer++;
	}

	return answer;
}

int main() {
	//Test Case
	cout << solution(10) << endl; //4
	cout << solution(5) << endl; //3
}