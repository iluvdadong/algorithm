#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

	int answer = 2;

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] - 1 == reserve[j] || lost[i] + 1 == reserve[j]) {
				
				break;
			}
		}
	}
	return answer;
}

int main() {

	int n = 5;

	vector<int> lost;
	vector<int> reserve;

	lost.push_back(2);
	lost.push_back(4);

	reserve.push_back(1);
	reserve.push_back(3);
	reserve.push_back(5);
	
	cout << solution(n, lost, reserve) << endl;

}