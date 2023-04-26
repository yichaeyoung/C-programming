#include <iostream>
using namespace std;

class Rectangle {
	public;
	int width;
	int height;
	//기본 생성자 함수 작성
	// 멤버 초기화 리스트 형식 : 멤버 변수들ㅇ르 좀 더 쉽게 초기화 할 수 있다.
	Rectangle() {
		//width = 10;
		//height = 5;
	}
	
	Rectangle() : width(0),height(0){}
	//일반 함수(메서드) : 사각형의 넓이를 계산
	void area_func() {
		cout << width * height << endl;
	}


};
int main() {
	
	//기본 생성자가 호출되어서 멤버 변수들은 좀 더 쉽게 초기화 할수 있다.
	Rectangle(): width(0),height(0){}
	//일반 햄수(메서드): 사각형의 넓이를 계산
	void area_func() {
		cout << width * height << endl;
	}

	return 0;
}