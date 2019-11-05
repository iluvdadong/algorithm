#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices) {

	vector<int> answer;
	int temp;
	int sec;

	for (int i = 0; i < prices.size()-1; i++) {
			
		temp = prices[i];
		sec = 1;
		for (int j = i + 1; j < prices.size()-1; j++) {
			if (temp <= prices[j]) sec++;
			else {
				break;
			}
		}
		answer.push_back(sec);
	}

	answer.push_back(0);

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i];
	}

	return answer;
}

int main() {
	vector<int> prices = { 1, 2, 3, 2, 3 };
	solution(prices);
}