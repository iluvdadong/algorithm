// Vector �����̳��� ��� ��
// C++ STL�� Sequence Container �� ���־��� vector

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v; //���� v ����
	
	// 00000 ���
	vector<int> v2(5); //0���� �ʱ�ȭ�� 5���� ���Ҹ� ���� ���� ����
	
	// 22222 ���
	vector<int> v3(5, 2); //2�� �ʱ�ȭ�� 5���� ���Ҹ� ���� ���� ����

	//v2�� v1������ ����
	vector<int> v4(v);


	/*   vector�� ��� �Լ�    */
	//�����Ѵٴ� ���� �ش� �����͸� �����Ѵٴ� ��

	//22222 ��� (5�� ���Ҹ� 2�� ������ �Ҵ�)
	v.assign(5, 2);

	// idx��° ���Ҹ� ����
	// 2��° ���������ϴ� 2�� ��µ�
	cout << v.at(2) << endl;

	// ������ ù��° ���� ����
	cout << v.front() << endl;

	// ������ ������ ���� ����
	cout << v.back() << endl;

	// ��� ���Ҹ� �����մϴ�.
	// ���Ҹ� �����ϰ� �޸𸮴� �����ִ�.
	// size�� �پ��� capacity�� �״�� �����ִ�.
	v.clear();
	cout << v.empty() << endl; //�� ���� ������ true == 1 ��ȯ

	//������ ���ҿ� 7 ����
	v.push_back(7);
	cout << v[0] << endl;

	//������ ���� ����
	v.pop_back();

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
	
	//ù��° ���� ����Ŵ
	v.begin();

	//�������� "����"!�� ����Ŵ
	v.end();

	//�Ųٷ��ؼ� ù��° ���Ұ���Ŵ reverse begin
	v.rbegin();

	//�Ųٷ��ؼ� ������ ������ ������ ����Ŵ reverse end
	v.rend();

	//ũ�⸦ n���� �����Ѵ�.
	//�� Ŀ���� ��� default ���� 0���� �ʱ�ȭ�ȴ�.
	v.resize(10);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	//ũ�⸦ 15�� �����ϰ� ��Ŀ���� ��� ���ڸ� 3���� �ʱ�ȭ �Ѵ�.
	v.resize(15, 3);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
	
	//������ ������ �����Ѵ�. 15
	cout << v.size() << endl;

	//�Ҵ�� ���� ũ�⸦ �����Ѵ�.
	//���� �Ҵ��� ������ ���� Ŀ���鼭 �Ҵ��ϰԵ�
	cout << v.capacity() << endl;

	//�տ��Ͱ� ���ǰ� ���ҿ� capacity�� �ٲ��ش�
	v2.swap(v3);

	// �Ǿտ��� ��ġ�� �ι�° ����ŭ ����° ���� �����Ѵ�.
	v.insert(v.begin(),100);

	//iterator�� index ��������� ���� ����;;
	vector<int>::iterator it;
	it = v.begin(); // it�� 0
	v.insert(it + 5, 200); //0+5 �ϱ� 5��°�� 200����

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	//iter�� ����Ű�� ���� ����
	//����� �پ�Ѱ� capacity(�Ҵ�� �޸𸮴� �״�� ����)
	v.erase(it+5);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	//���Ͱ� ��������� ���� true
	//����ִٴ� ���� size�� 0, capacity�ʹ� ��� ��
	cout << endl << v.empty() << endl;

	// v.size() : �����Ͱ� ä���� ������ ����
	// v.capacity() : �Ҵ�� �޸� ���� 2^n �������� �Ҵ��Ҷ����� capacity�� ������



	/*  vector�� ��� ����  */

	//iterator - �ݺ��� ����
	//reverse_iterator - �� �ݺ��� ����
	//value_type - ������ ����
	//size_type - ������ ������ ����

	//�ݺ��� iterator Ȱ���� �ݺ�
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " / ";

	cout << endl;

	//������� size_type�� Ȱ���� �ݺ�
	vector<int>::size_type i;
	for (i = 0; i < v.size(); i++)
		cout << v.at(i) << " / "; //v.at(i) == v[i]
	
	cout << endl;
	//iterator Ȱ���� �����
	//���� �� ���Ұ� 100�� �� ����
	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter == 100) {
			v.erase(iter);
		}
	}

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " / ";
	
	return 0;
}