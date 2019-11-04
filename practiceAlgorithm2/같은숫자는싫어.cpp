//같은 숫자는 싫어

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {

	vector<int> answer;
	answer.push_back(arr[0]);

	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] != arr[i - 1]) {
			answer.push_back(arr[i]);
		}
	}
	
	for (int i = 0;i < answer.size(); i++)
		cout << answer[i] << " ";

	return answer;
}

int main() {

	vector<int> v = { 1,1,3,3,0,1,1 };
	solution(v);
	cout << endl;
	vector<int> v2 = { 4,4,4,3,3 };
	solution(v2);
}