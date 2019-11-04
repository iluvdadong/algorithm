#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v = { 1,2,3,4,5 };
	
	cout << v[0] << endl; //1출력
	v.erase(v.begin() + 0);
	cout << v[0] << endl; //1이 없어지므로서 2가 맨 앞으로 와서 2가 출력
}