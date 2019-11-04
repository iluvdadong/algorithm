// 가운데 글자 가져오기
#include <iostream>
#include <string>
using namespace std;

string solution(string s) {
	string answer;

	int num = s.size() / 2;

	if (s.size()%2 != 0) { //홀수
		answer.push_back(s[num]);
	}
	else { //짝수
		answer.push_back(s[num - 1]);
		answer.push_back(s[num]);
	}

	return answer;
}

int main() {

	string s("abcde");
	string s2("qwer");

	cout << solution(s) << endl;
	cout << solution(s2) << endl;

	return 0;
}