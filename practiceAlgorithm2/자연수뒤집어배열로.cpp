//자연수 뒤집어 배열로

#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(long long n) {

	int temp;
	vector<int> v;

	while (n != 0) {
		temp = n % 10;
		v.push_back(temp);
		n = n / 10;
	}

	for (int i = 0;i < v.size(); i++)
		cout << v[i] << " ";
	return v;
}

int main() {
 
	long long n = 12345;
	solution(n);

}