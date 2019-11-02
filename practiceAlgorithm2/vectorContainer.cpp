// Vector 컨테이너의 모든 것
// C++ STL의 Sequence Container 중 자주쓰는 vector

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v; //벡터 v 선언
	
	// 00000 출력
	vector<int> v2(5); //0으로 초기화된 5개의 원소를 가진 벡터 선언
	
	// 22222 출력
	vector<int> v3(5, 2); //2로 초기화된 5개의 원소를 가진 벡터 생성

	//v2를 v1복사해 생성
	vector<int> v4(v);


	/*   vector의 멤버 함수    */
	//참조한다는 것은 해당 데이터를 리턴한다는 뜻

	//22222 출력 (5의 원소를 2의 값으로 할당)
	v.assign(5, 2);

	// idx번째 원소를 참조
	// 2번째 원소참조하니 2가 출력됨
	cout << v.at(2) << endl;

	// 벡터의 첫번째 원소 참조
	cout << v.front() << endl;

	// 벡터의 마지막 원소 참조
	cout << v.back() << endl;

	// 모든 원소를 제거합니다.
	// 원소만 제거하고 메모리는 남아있다.
	// size만 줄어들고 capacity는 그대로 남아있다.
	v.clear();
	cout << v.empty() << endl; //다 제거 됐으니 true == 1 반환

	//마지막 원소에 7 삽입
	v.push_back(7);
	cout << v[0] << endl;

	//마지막 원소 제거
	v.pop_back();

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
	
	//첫번째 원소 가리킴
	v.begin();

	//마지막의 "다음"!을 가리킴
	v.end();

	//거꾸로해서 첫번째 원소가리킴 reverse begin
	v.rbegin();

	//거꾸로해서 마지막 원소의 다음을 가르킴 reverse end
	v.rend();

	//크기를 n으로 변경한다.
	//더 커졌을 경우 default 값이 0으로 초기화된다.
	v.resize(10);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	//크기를 15로 변경하고 더커졌을 경우 인자를 3으로 초기화 한다.
	v.resize(15, 3);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
	
	//원소의 갯수를 리턴한다. 15
	cout << v.size() << endl;

	//할당된 공간 크기를 리턴한다.
	//공간 할당의 기준은 점점 커지면서 할당하게됨
	cout << v.capacity() << endl;

	//앞에것과 뒤의것 원소와 capacity를 바꿔준다
	v2.swap(v3);

	// 맨앞에꺼 위치에 두번째 수만큼 세번째 수를 삽입한다.
	v.insert(v.begin(),100);

	//iterator로 index 지정해줘야 삽입 가능;;
	vector<int>::iterator it;
	it = v.begin(); // it는 0
	v.insert(it + 5, 200); //0+5 니깐 5번째에 200삽입

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	//iter가 가리키는 원소 제거
	//사이즈만 줄어둘고 capacity(할당된 메모리는 그대로 남음)
	v.erase(it+5);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	//벡터가 비어있으면 리턴 true
	//비어있다는 것은 size가 0, capacity와는 상관 무
	cout << endl << v.empty() << endl;

	// v.size() : 데이터가 채워진 원소의 개수
	// v.capacity() : 할당된 메모리 공간 2^n 제곱으로 할당할때마다 capacity가 증가함



	/*  vector의 멤버 형식  */

	//iterator - 반복자 형식
	//reverse_iterator - 역 반복자 형식
	//value_type - 원소의 형식
	//size_type - 원소의 개수의 형식

	//반복자 iterator 활용한 반복
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " / ";

	cout << endl;

	//멤버형식 size_type을 활용한 반복
	vector<int>::size_type i;
	for (i = 0; i < v.size(); i++)
		cout << v.at(i) << " / "; //v.at(i) == v[i]
	
	cout << endl;
	//iterator 활용해 지우기
	//벡터 중 원소가 100인 것 삭제
	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter == 100) {
			v.erase(iter);
		}
	}

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " / ";
	
	return 0;
}