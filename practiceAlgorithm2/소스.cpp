#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v = { 1,2,3,4,5 };
	
	cout << v[0] << endl; //1���
	v.erase(v.begin() + 0);
	cout << v[0] << endl; //1�� �������Ƿμ� 2�� �� ������ �ͼ� 2�� ���

	//��! Ư�� ���Ҹ� �����ϸ� ��ĭ�� vector�� �ڵ����� �з��� ��迭�ȴ�.
}