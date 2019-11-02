#include <iostream>
#include <string>
using namespace std;

int main() {

	string str("Hello World"); //���� 1
	string str1;
	str1 = "Hello Wolrd"; //����2

	string str2(str1); //���� 3

	/*     string ���� ����, access ����  */


	cout << str.at(0) << endl;	//'H'����
	cout << str[0] << endl;		//'H'���� string�� ���ڿ� ���� (at���� ����)
	cout << str.front() << endl; //H'����
	cout << str.back() << endl; //'d'����

	/*     string size ����	 */

	cout << str.size() << endl; //string�� ������ ��ȯ, ��ĭ���� 11 ��ȯ
	cout << str.length() << endl; //string�� ���̹�ȯ, == size()
	cout << str.capacity() << endl; //string ��ü�� �Ҵ�� �޸� ũ��(bytes)��ȯ,  size()�� ���� �޸𸮸� �����Ӱ� ��ȯ��
	str.resize(5); //'Hello' �� ����
	cout << str << endl;
	str.resize(10); // 'Hello     ' ��ĭ���� ä����
	cout << str << endl;
	str.resize(15, 'a'); // 'Hello     aaaaa' �� ��
	cout << str << endl;

	cout << str.capacity() << endl;
	str.resize(5);
	cout << str << endl;
	cout << str.capacity() << endl;
	str.shrink_to_fit(); //capacity�� �˸°� �����ϴ� ��
	cout << str.capacity() << endl;

	//���� ������ ���,
	//���ڿ��� �ֱ� ���� �̸� "�� n��ŭ�� ��Ʈ���� ������ �׿� �´� capacity�� �Ҵ��ش޶�"�� �Լ�
	//�̸� �޸𸮸� �Ҵ��ؼ� ����ؼ� �߰��� �Ҵ��ϴ� ��� ����
	str.reserve(3000);

	//string�� ����ִ� ���ڿ��� ����� �Լ�
	//�̶� size�� length�� 0�� ��
	//�׷��� �Ҵ�� �޸��� capacity�� �״�δ�
	//�� �޸� ������ �ƴ϶� �Ҵ�� ���ڰ��� �����ϴ� ���̴�.
	str.clear();
	cout << str << endl;
	cout << str.length() << endl;

	//��Ʈ���� ����ִ��� Ȯ���ϴ� �Լ� 
	//����ִٸ� true == 1 ��ȯ
	//��������� ������ size�� length�� 0�̳Ĵ� ��
	cout << str.empty() << endl; // ��������� 1��ȯ


	/*    string ������ ��� ����	 */

	str = "Hello World";

	//c��� ó�� ����ϱ�
	//"Hello World" => "Hello Wolrd\0" �� ��ȯ�ؼ� C��� ó�� ��밡��
	const char* arr = str.c_str();
	cout << arr << endl;
	cout << *arr << endl; // arr�� char arr���� ����Ű�� ������ arr[0]

	//string�� index�������� len��ŭ �߶� ��ȯ�ϴ� �Լ�
	//���� ��Ʈ���� �ڸ��°� �ƴϰ� ��ȯ�� �߶� �ϴ� ����
	//��Ʈ���� �߶� ��ȯ!
	cout << str.substr() << endl;
	 
	// 0���� ���� �����ؼ� 5��° ���ں��� ������ ��ȯ
	// ' World'�� ��ȯ��
	cout << str.substr(5) << endl; 
	cout << str << endl;

	// 5��° ���ں��� 2�� ���̸�ŭ ���ڿ� ��ȯ
	cout << str.substr(5, 2) << endl;
	cout << str.substr(6, 5) << endl;

	//�Լ��� ȣ���ϴ� string�� index���� len���̱����� ������
	//�Ű������� ���� str ��ü�� ��ü�ϴ� �Լ�
	string a("Dahae");

	str.replace(5, 1, a); //5��°���� 1���̸�ŭ ������� ���ڸ��� string a�� ����

	cout << str << endl;

	//�Ű������� ���� str���� ���ؼ� ������ 0 �ٸ��� -1, 1
	// ���� < �Ű� : -1
	// ���� > �Ű� : 1 

	cout << str.compare(a) << endl;
	cout << a.compare(str) << endl;
	cout << a.compare(a) << endl;
	cout << a.compare("Dahae") << endl;


	//index�� ��ġ�� ���� Ư�� ���̸�ŭ �����ϴ� �Լ�
	// str.copy(.., .., ..)
	// ù��° �Ű�����: char �迭Ÿ�� char*
	// �ι�° �Ű�����: ������ ��ŭ�� ���ڿ� ����
	// ����° �Ű�����: ������ str�� ��ġ

	char arr1[10];
	int arrLen = a.copy(arr1, 2, 0); //��ȯ 2
	arr1[arrLen] = '\0'; //C�� ���ڿ� ������ '\'�� �� �־������

	cout << arr1 << endl;


	// �Ű������� ���� ���ڿ��� �� ���ڿ� �� ��ġ�ϴ°� �ִ��� Ȯ��
	// ��ġ�ϴ°� �ִ� => ��ġ�ϴ� �κ��� ù��° index ��ȯ
	// �ι�° �Ű������� ���� index�� �����ġ���� ã���� �̴�.

	a = "dahaedahaedahae";
	cout << a.find("hae") << endl;
	cout << a.find("hae", 4) << endl;

	// string �ǵڿ� char ���ڸ� ���ϴ� �Լ�
	a.push_back('Y');
	cout << a << endl;

	//string �ǵڿ� char ���ڸ� ���� ��
	a.pop_back();
	cout << a << endl;

	
	/*    string iterator ����	 */

	a = "dahae";
	//���ڿ� ù��° ���ڸ� ����Ű�� �ݺ���(iterator ������) ��ȯ
	a.begin();

	//���ڿ��� ������ �ٷ� ������ ����Ű�� �ݺ���(iterator ������) ��ȯ
	//���ڿ� ���� �ƴ� �� �ٷ� ������ ����Ŵ
	a.end();

	//string�� ���� �޸� ��� �����̳��̹Ƿ� vectoró�� ���� ���� �ݺ��� ����
	string::iterator iter;
	for (iter = a.begin(); iter != a.end(); ++iter)
		cout << *iter << endl; //iter�� ����Ű�� �� ���

	/*    string�� ��Ÿ���	 */
	
	//�ΰ��� string�� ���� ����(refrenc)�� ��ȯ�ؼ� ����
	//�׷��⿡ ���翡 ���� �������� ����� ����
	string aa("aa");
	string bb("bb");

	swap(aa, bb);
	cout << aa << endl;
	cout << bb << endl;

	//operator +
	string cc = aa + bb;
	cout << cc << endl;

}