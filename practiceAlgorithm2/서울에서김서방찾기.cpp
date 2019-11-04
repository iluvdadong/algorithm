//서울에서 김서방 찾기

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {

	string answer = "김서방은 ";

	for (int i = 0; i < seoul.size(); i++) {
		if (seoul[i] == "Kim") {
			// int형 i를 string으로 형변환
			string num;
			num = to_string(i);
			answer = answer + num + "에 있다";
			break;
		}
	}
	return answer;
}

int main() {

	vector<string> v = { "Jane", "Kim", "Dahae" };
	cout << solution(v) << endl;
}