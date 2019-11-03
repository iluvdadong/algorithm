// map �����̳�

/*

- ���� �����̳� �� �ϳ�
- ��� ������� �̷���� �ִ� '���� ���� Ʈ�� ����'
- Map�� Key�� value�� �̷��������� pair ��ü ���·� �����
- Unique Key : key�� ������ ���̹Ƿ� �ߺ��� �Ұ���
- *��, multimap�� �ߺ� key�� ����
- Ordered : map�� set�� ���������� ������ �Ǹ鼭 �ڵ� ���ĵ�
- *default �� ��������
- Allocater-aware: map container�� ��������� �ʿ信 ���� allocater��ü ���
- = �����Ҵ� �Ѵٴ� ��


*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	//����

	map<int, int> m1;
	map<string, int> m2;

	//map�� ���� �ϱ����� insert�� pair��ü�� ���ڷ� �޾ƾ� �Ѵ�.
	//key���� value�� ���� �̷�� �����̴�.

	m1.insert(pair<int, int>(10, 20));
	m2.insert(pair<string, int>("dahae", 28));

	m1[10] = 20; // m[key] = value; �̷��Ե� ���� �߰� �� ���� ����

	// �⺻ insert, ��ȸ ���ٹ��

	map<int, string> m;

	m.insert(pair<int, string>(0, "dahae"));
	m.insert(pair<int, string>(1, "suzy"));
	m.insert(pair<int, string>(2, "dalgun"));

	map<int, string>::iterator iter;

	//���ٹ�� 1
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << "," << iter->second << endl;
	}
	
	cout << endl;

	//���ٹ�� 2
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << (*iter).first << "," << (*iter).second << endl;
	}

	cout << endl;

	//������ ��� : 3
	cout << "map�� ������ : " << m.size() << endl;

	return 0;
}