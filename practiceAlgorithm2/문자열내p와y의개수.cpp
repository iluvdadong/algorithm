#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int Pcnt = 0;
	int Ycnt = 0;

	for (int i = 0; i < s.size(); i++) {

		if (s[i] == 'p' || s[i] == 'P') {
			Pcnt++;
		}
		if (s[i] == 'y' || s[i] == 'Y') {
			Ycnt++;
		}
	}

	if (Pcnt == 0 && Ycnt == 0) {
		answer = true;
	} if (Pcnt == Ycnt) answer = true;
	else answer = false;

	return answer;
}