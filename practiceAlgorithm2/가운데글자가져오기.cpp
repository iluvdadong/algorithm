// ��� ���� ��������
#include <iostream>
#include <string>
using namespace std;

string solution(string s) {
	string answer;

	int num = s.size() / 2;

	if (s.size()%2 != 0) { //Ȧ��
		answer.push_back(s[num]);
	}
	else { //¦��
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