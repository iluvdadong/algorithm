#include <iostream>
#include <vector>

using namespace std;

bool solution(string s) {
	
	bool answer = true;
	if (s.length() < 1 || s.length() > 8) {
		answer = false;
		return answer;
	}

	if (s.length() == 4 || s.length() == 6) { //���̰� 4 Ȥ�� 6
		
		for (int i = 0; i < s.length(); i++) {
			if (!((int)s[i] - 48 >= 0 && (int)s[i] - 48 <= 9)) { //�̰� �ƴ϶�� ��� ��� �� false��
				answer = false;
				return answer;
			}
		}
	}
	else {
		answer = false;
		return answer;
	}
	
	return answer;
}

int main() {

	string s = "a234";
	cout << solution(s) << endl;
}