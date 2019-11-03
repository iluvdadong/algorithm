// map 컨테이너

/*

- 연관 컨테이너 중 하나
- 노드 기반으로 이루어져 있는 '균형 이진 트리 구조'
- Map은 Key와 value로 이뤄져있으며 pair 객체 형태로 저장됨
- Unique Key : key는 고유한 값이므로 중복이 불가능
- *단, multimap은 중복 key가 가능
- Ordered : map도 set과 마찬가지로 삽입이 되면서 자동 정렬됨
- *default 는 오름차순
- Allocater-aware: map container는 저장공간의 필요에 따라 allocater객체 사용
- = 동적할당 한다는 말


*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	//생성

	map<int, int> m1;
	map<string, int> m2;

	//map에 삽입 하기위한 insert는 pair객체를 인자로 받아야 한다.
	//key값과 value는 쌍을 이루기 때문이다.

	m1.insert(pair<int, int>(10, 20));
	m2.insert(pair<string, int>("dahae", 28));

	m1[10] = 20; // m[key] = value; 이렇게도 원소 추가 및 수정 가능

	// 기본 insert, 순회 접근방법

	map<int, string> m;

	m.insert(pair<int, string>(0, "dahae"));
	m.insert(pair<int, string>(1, "suzy"));
	m.insert(pair<int, string>(2, "dalgun"));

	map<int, string>::iterator iter;

	//접근방법 1
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << "," << iter->second << endl;
	}
	
	cout << endl;

	//접근방법 2
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << (*iter).first << "," << (*iter).second << endl;
	}

	cout << endl;

	//사이즈 출력 : 3
	cout << "map의 사이즈 : " << m.size() << endl;

	return 0;
}