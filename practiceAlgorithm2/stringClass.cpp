#include <iostream>
#include <string>
using namespace std;

int main() {

	string str("Hello World"); //생성 1
	string str1;
	str1 = "Hello Wolrd"; //생성2

	string str2(str1); //생성 3

	/*     string 인자 접근, access 관련  */


	cout << str.at(0) << endl;	//'H'리턴
	cout << str[0] << endl;		//'H'리턴 string의 인자에 접근 (at보다 빠름)
	cout << str.front() << endl; //H'리턴
	cout << str.back() << endl; //'d'리턴

	/*     string size 관련	 */

	cout << str.size() << endl; //string의 사이즈 반환, 빈칸포함 11 반환
	cout << str.length() << endl; //string의 길이반환, == size()
	cout << str.capacity() << endl; //string 객체에 할당된 메모리 크기(bytes)반환,  size()에 비해 메모리를 여유롭게 반환함
	str.resize(5); //'Hello' 로 줄임
	cout << str << endl;
	str.resize(10); // 'Hello     ' 빈칸으로 채워짐
	cout << str << endl;
	str.resize(15, 'a'); // 'Hello     aaaaa' 가 됨
	cout << str << endl;

	cout << str.capacity() << endl;
	str.resize(5);
	cout << str << endl;
	cout << str.capacity() << endl;
	str.shrink_to_fit(); //capacity를 알맞게 조절하는 것
	cout << str.capacity() << endl;

	//파일 읽을때 사용,
	//문자열을 넣기 전에 미리 "곧 n만큼의 스트링이 들어오니 그에 맞는 capacity를 할당해달라"는 함수
	//미리 메모리를 할당해서 계속해서 추가로 할당하는 비용 줄임
	str.reserve(3000);

	//string에 들어있는 문자열을 지우는 함수
	//이때 size와 length는 0이 됨
	//그러나 할당된 메모리인 capacity는 그대로다
	//즉 메모리 해제가 아니라 할당된 문자값을 삭제하는 것이다.
	str.clear();
	cout << str << endl;
	cout << str.length() << endl;

	//스트링이 비어있는지 확인하는 함수 
	//비어있다면 true == 1 반환
	//비어있음의 기준은 size나 length가 0이냐는 것
	cout << str.empty() << endl; // 비어있으니 1반환


	/*    string 가지고 놀기 종류	 */

	str = "Hello World";

	//c언어 처럼 사용하기
	//"Hello World" => "Hello Wolrd\0" 로 변환해서 C언어 처럼 사용가능
	const char* arr = str.c_str();
	cout << arr << endl;
	cout << *arr << endl; // arr는 char arr만을 가리키는 포인터 arr[0]

	//string을 index에서부터 len만큼 잘라서 반환하는 함수
	//실제 스트링을 자르는건 아니고 반환만 잘라서 하는 것임
	//스트링을 잘라서 반환!
	cout << str.substr() << endl;
	 
	// 0부터 세기 시작해서 5번째 인자부터 끝까지 반환
	// ' World'가 반환됨
	cout << str.substr(5) << endl; 
	cout << str << endl;

	// 5번째 인자부터 2의 길이만큼 문자열 반환
	cout << str.substr(5, 2) << endl;
	cout << str.substr(6, 5) << endl;

	//함수를 호출하는 string의 index에서 len길이까지의 범위를
	//매개변수로 들어온 str 전체로 대체하는 함수
	string a("Dahae");

	str.replace(5, 1, a); //5번째부터 1길이만큼 사라지고 그자리에 string a가 들어옴

	cout << str << endl;

	//매개변수로 들어온 str값을 비교해서 같으면 0 다르면 -1, 1
	// 기존 < 매개 : -1
	// 기존 > 매개 : 1 

	cout << str.compare(a) << endl;
	cout << a.compare(str) << endl;
	cout << a.compare(a) << endl;
	cout << a.compare("Dahae") << endl;


	//index의 위치를 정해 특정 길이만큼 복사하는 함수
	// str.copy(.., .., ..)
	// 첫번째 매개변수: char 배열타임 char*
	// 두번째 매개변수: 복사할 만큼의 문자열 길이
	// 세번째 매개변수: 복사할 str의 위치

	char arr1[10];
	int arrLen = a.copy(arr1, 2, 0); //반환 2
	arr1[arrLen] = '\0'; //C의 문자열 끝에는 '\'을 꼭 넣어줘야함

	cout << arr1 << endl;


	// 매개변수로 들어온 문자열과 내 문자열 중 일치하는게 있는지 확인
	// 일치하는게 있다 => 일치하는 부분의 첫번째 index 반환
	// 두번째 매개변수로 들어온 index는 어느위치부터 찾을까 이다.

	a = "dahaedahaedahae";
	cout << a.find("hae") << endl;
	cout << a.find("hae", 4) << endl;

	// string 맨뒤에 char 문자를 더하는 함수
	a.push_back('Y');
	cout << a << endl;

	//string 맨뒤에 char 문자를 빼는 함
	a.pop_back();
	cout << a << endl;

	
	/*    string iterator 종류	 */

	a = "dahae";
	//문자열 첫번째 문자를 가리키는 반복자(iterator 포인터) 반환
	a.begin();

	//문자열의 마지막 바로 다음을 가리키는 반복자(iterator 포인터) 반환
	//문자열 끝이 아닌 끝 바로 다음을 가리킴
	a.end();

	//string은 연속 메모리 기반 컨테이너이므로 vector처럼 임의 접근 반복자 제공
	string::iterator iter;
	for (iter = a.begin(); iter != a.end(); ++iter)
		cout << *iter << endl; //iter가 가리키는 것 출력

	/*    string의 기타등등	 */
	
	//두개의 string을 서로 참조(refrenc)를 교환해서 스왑
	//그렇기에 복사에 의한 성능저하 우려가 없다
	string aa("aa");
	string bb("bb");

	swap(aa, bb);
	cout << aa << endl;
	cout << bb << endl;

	//operator +
	string cc = aa + bb;
	cout << cc << endl;

}