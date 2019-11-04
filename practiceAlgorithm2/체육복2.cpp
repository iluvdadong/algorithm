//ü���� level 1

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

	if (!(2 <= n && n <= 30))
		return false;

	int answer = n;
 	int lostSize = lost.size();
	int cnt = 0;

	if (reserve.size() == 0) {
		return answer = n - lostSize;
	}

	// ������ ü������ ������ ����� �ٸ� ������� �����ִ°� �ƴ϶� �� �ڽ��� �Ծ����!
	// �׷��� ���� ó���ؾ� �ϴ� ���̴�

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] == reserve[j]) {
				lost[i] = -50; //������ ������ �л���ȣ�� �ƴ� ��
				reserve[j] = -100; //������ ������ �л���ȣ�� �ƴ� ���̸� lost[i]�� ��ġ���� �ʴ� ��
				cnt++;
				break;
			}

		}
	}

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] - 1 == reserve[j] || lost[i] + 1 == reserve[j]) {
					lost[i] = -50; //������ ������ �л���ȣ�� �ƴ� ��
					reserve[j] = -100; //������ ������ �л���ȣ�� �ƴ� ���̸� lost[i]�� ��ġ���� �ʴ� ��
					cnt++;
					break;
			}
			
		}
	}

	answer = answer - lostSize + cnt;
	return answer;
}


int main() {

	//int n = 5;
	//vector<int> lost = { 2, 4 };
	//vector<int> reserve = { 1, 3, 5 };
	//cout << solution(5, lost, reserve) << endl;

	//int n = 5;
	//vector<int> lost = { 2, 4 };
	//vector<int> reserve = { 3 };
	//cout << solution(5, lost, reserve) << endl;

	int n = 3;
	vector<int> lost = { 3 };
	vector<int> reserve = { 1 };
	cout << solution(3, lost, reserve) << endl;
}