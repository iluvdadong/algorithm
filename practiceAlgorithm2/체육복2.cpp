//체육복 level 1

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

	if (!(2 <= n && n <= 30))
		return false;

	int answer = n;
 	int lostSize = lost.size();
	int cnt = 0;

	if (reserve.size() == 0) {
		return answer = n - lostSize;
	}

	// 여벌의 체육복을 가져온 사람은 다른 사람한테 빌려주는게 아니라 꼭 자신이 입어야함!
	// 그래서 먼저 처리해야 하는 것이다

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] == reserve[j]) {
				lost[i] = -50; //임의의 수이자 학생번호가 아닌 수
				reserve[j] = -100; //임의의 수이자 학생번호가 아닌 수이며 lost[i]와 일치하지 않는 수
				cnt++;
				break;
			}

		}
	}

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] - 1 == reserve[j] || lost[i] + 1 == reserve[j]) {
					lost[i] = -50; //임의의 수이자 학생번호가 아닌 수
					reserve[j] = -100; //임의의 수이자 학생번호가 아닌 수이며 lost[i]와 일치하지 않는 수
					cnt++;
					break;
			}
			
		}
	}

	answer = answer - lostSize + cnt;
	return answer;
}


int main() {

	//int n = 5;
	//vector<int> lost = { 2, 4 };
	//vector<int> reserve = { 1, 3, 5 };
	//cout << solution(5, lost, reserve) << endl;

	//int n = 5;
	//vector<int> lost = { 2, 4 };
	//vector<int> reserve = { 3 };
	//cout << solution(5, lost, reserve) << endl;

	int n = 3;
	vector<int> lost = { 3 };
	vector<int> reserve = { 1 };
	cout << solution(3, lost, reserve) << endl;
}