#include <iostream>
#include <vector>
using namespace std;

int solution(int n) {

	int answer = 0;
	vector<int> arr(n + 1);

	for (int i = 2; i < arr.size(); i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) //�̹� i�� ������� �� 0���� üũ�Ʊ⿡ ���� for�� �ٷ� ����
			continue;
		for (int j = i * 2; j <= n; j = j + i) {
			arr[j] = 0;
		}
	}
	
	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) //0�� �ƴ϶�� ���� ����� ����ε� ������������ ��
			answer++;
	}

	return answer;
}

int main() {
	//Test Case
	cout << solution(10) << endl; //4
	cout << solution(5) << endl; //3
}