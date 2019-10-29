#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	
	string answer = "";

	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0;i < completion.size();i++) {

		if (participant[i] != completion[i])
			return participant[i];
	}
	//if문 조건 미충족시 마지막 참가자가 completion못한 것이기에
	//벡터사이즈 - 1 것 리턴(배열은 0부터 시작이니깐)
	return participant[participant.size() - 1];
	
}