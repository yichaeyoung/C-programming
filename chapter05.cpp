#include <iostream>
#include <string>
using namespace std;

//문자열(String)
int main() {
	
	/**/
	//c-string 방식
	char name[20] = "김하나";	//'\0'
	const char* name1 = "김하나";

	//C++ 방식
	string s1 = "Busan";
	string s2("Wonderful");
	string s3{ "City" };

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "-----------------" << endl;

	//문자열을 다루는 함수(메서드)
	string s = "when i Rome, do as the Romans.";

	//요소에 접근
	cout << "s = " << s << endl;
	cout << "s[0] = " << s[0] << endl;
	cout << "-----------------" << endl;


	//문자열 개수 알아보기
	cout << "문자열의 개수 (s.length()) = " << s.length() << endl;
	cout << "-----------------" << endl;


	//문자열 찾기: Rome이 몇번째 위치에 있는가?
	cout << "s.find(\"Rome\") = " << s.find("Rome") << endl;
	cout << "-----------------" << endl;

	//18번째 이후에 있는 a가 몇번째 위치에 있는가?
	cout << "s.find(\"a\", 18) = " << s.find("a", 18) << endl;
	cout << "-----------------" << endl;

	//문자열 삽입 : 7번째 위치에 "Korea" 문자열 삽입
	cout << "s.insert(7,\"Korea\") = " << s.insert(7,"Korea") << endl;
	cout << "-----------------" << endl;

	//문자열 삭제 : 12번째 위치에 "Rome" 문자열 삭제
	cout << "s.erase(12, 4) = " << s.erase(12, 4) << endl;
	cout << "-----------------" << endl;

	//문자열 1개만 가져오기 : 0번째 위치의 문자열 1개만 가져오기
	cout << "s.at(0) = " << s.at(0) << endl;
	cout << "-----------------" << endl;
	
	//cin, cout과 문자열 함수

	
	//공백을 포함해서 입력받을 수 없다.
	string name;
	string address;

	cout << "이름 입력 : " << endl;
	cin >> name;

	cout << "주소 입력 : " << endl;
	cin >> address;

	cout << name << " 학생의 주소는 " << address << "입니다." << endl;
	cout << "-----------------" << endl;
	

	//공백을 포함해서 Enter만나기 전까지 모두 입력받기
	//형식)getline(입력받는 스트림, 저장할 변수명);
	//형식)getline(cin, name);

	
	string name;
	string address;

	cout << "이름 입력 : " << endl;
	getline(cin, name);	//공백을 포함해서 입력 받기

	cout << "주소 입력 : " << endl;
	getline(cin, address);

	cout << name << " 학생의 주소는 \'" << address << "\' 입니다." << endl;
	cout << "-----------------" << endl;
	

	string name;
	string address;

	cout << "이름 입력 : " << endl;
	cin >> name;	//공백 포함해서 입력 안됨
	//cin.ignore();
	cin.get();	//문자 하나 읽어오기

	cout << "주소 입력 : " << endl;
	getline(cin, address);

	cout << name << " 학생의 주소는 \'" << address << "\' 입니다." << endl;
	cout << "-----------------" << endl;
	//김하나 엔터 부산광역시 부산진구 엔터

	//cin.get(): char형 --> c-string 형식으로 처리한다.
	//표준 입력 스트림에서 문자를 하나만 가져온다.
	cout << "문자 입력: " << endl;
	char ch1, ch2;
	ch1 = cin.get();
	ch2 = cin.get();
	cout.put(ch1);
	cout.put('\n');
	cout.put(ch2);
	cout.put('A');
	cout.put('\n');


	cout << "ch1 = " << ch1 << "ch2 = " << ch2 << endl;
	*/

	string s = "when i Rome, do as the Romans.";
	/*
	//for문을 이용한 요소 하나 단위로 출력
	for (int i = 0; i <= 30; i++) {
		cout << "s[" << i << "] = ";
		cout << s[i] << endl;

	}
	*/

	//자동으로 배열의 개수 구하기 : 전체 배열의 개수 / 자료형이 차지하는 크기

	int len = sizeof(s) / sizeof(char);
	cout << "배열의 개수 = " << len << endl;
	cout << "----------------" << endl;

		for (int i = 0; i <= s.length(); i++) {
			cout << "s[" << i << "] = ";
			cout << s[i] << endl;
		}

	//for~each문 (배열 전용 for문)
	//형식)for(배열에서 꺼내온 요소값을 저장하는 변수명 : 배열명){ 반복 처리 내용 } 

		for (string x : s) {
			cout << x;
		}
	return 0;
}