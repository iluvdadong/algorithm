//���￡�� �輭�� ã��

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {

	string answer = "�輭���� ";

	for (int i = 0; i < seoul.size(); i++) {
		if (seoul[i] == "Kim") {
			// int�� i�� string���� ����ȯ
			string num;
			num = to_string(i);
			answer = answer + num + "�� �ִ�";
			break;
		}
	}
	return answer;
}

int main() {

	vector<string> v = { "Jane", "Kim", "Dahae" };
	cout << solution(v) << endl;
}