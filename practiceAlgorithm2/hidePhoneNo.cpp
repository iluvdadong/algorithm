// 핸드폰 번호 가리기

#include <iostream>
#include <string>

using namespace std;

string solution(string phone_number) {
	
	string str = phone_number;

	for (int i = 0; i < str.length() - 4; i++) {
		str[i] = '*';
	}

	return str;
}


int main() {
	
	string a("01033334444");
	cout << solution(a) << endl;

}