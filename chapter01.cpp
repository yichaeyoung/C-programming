#include<iostream>

//입력과 출력
//1.출력: 
//출력 형식)std::cout << 출력내용 << std::endl
//<< 출력 연산자 : 출력 항목들을 구분해서 사용한다.

int main() {
	/*
	//자기 소개를 출력합니다.
	//이름, 나이, 혈액형, 키를 출력한다.

	//이름은 홍길동 입니다.
	//나이는 20세 입니다.
	//혈액형은 A형 입니다.
	//키는 175.5cm 입니다.
	
	//출력 형식)std::cout << 출력내용 << std::endl
	std::cout << "이름은 홍길동 입니다." << std::endl;
	std::cout << "나이는 20세 입니다." << std::endl;
	std::cout << "혈액형은 A형 입니다." << std::endl;
	std::cout << "키는 175.5cm 입니다." << std::endl;
	std::cout << "--------------------" << std::endl;

	//변수를 이용한 출력
	char name[10] = "홍길동";	//문자열은 큰따옴표를 붙여서 데이터 넣어주기
	int age = 20;
	char blood = 'A';	//문자 하나는 작은 따옴표를 붙여서 데이터 넣어주기
	double height = 175.5;

	//printf("%s\n", name);
	std::cout << "이름 : " << name << std::endl;
	std::cout << "나이 : " << age << std::endl;
	std::cout << "혈액형 : " << blood << std::endl;
	std::cout << "키 : " << height << std::endl;
	std::cout << "--------------------" << std::endl;

	//변수를 이용한 입력(키보드로 직접 입력받은 데이터를 변수에 저장시키기)
	//scanf("%d",&age)
	//std::cin >> 저장할 변수명;
	// >> 입력연산자 : 입력 항목들을 구분해서 사용한다.

	//저장할 변수 준비 --> 메모리 공간 확보
	char name1[10];
	int age1;
	char blood1;
	double height1;

	std::cout << "이름을 입력하세요 >>> " << std::endl;
	std::cin >> name1;	//키보드로 데이터 입력하면  name1변수에 저장됨
	std::cout << "나이를 입력하세요 >>> " << std::endl;
	std::cin >> age1;	//키보드로 데이터 입력하면  age1변수에 저장됨
	std::cout << "혈액형을 입력하세요 >>> " << std::endl;
	std::cin >> blood1;	//키보드로 데이터 입력하면  blood1변수에 저장됨
	std::cout << "키를 입력하세요 >>> " << std::endl;
	std::cin >> height1;	//키보드로 데이터 입력하면  height1변수에 저장됨

	std::cout << "이름 : " << name1 << std::endl;
	std::cout << "나이: " << age1 << std::endl;
	std::cout << "혈액형 : " << blood1 << std::endl;
	std::cout << "키 : " << height1 << std::endl;
	

	char name2[10];
	int age2;
	char blood2;
	double height2;

	std::cout << "이름, 나이, 혈액형, 키를 입력하세요.(각 항목은 스페이스, tab, enter로 구분) >>> " << std::endl;
	//scanf("%s %d %c %lf", &name2, &age2, &blood2, &height2)
	std::cin >> name2 >> age2 >> blood2 >> height2;
	std::cout << "이름 : " << name2 << ", 나이 : " << age2 << ", 혈액형: " << blood2 << ", 키: " << height2 << std::endl;
	*/

	//현재 가지고 있는 돈과 사탕의 가격을 키보드로 입력받아 변수에 저장하고,
	//현재 가지고 있는 돈으로 최대한 살 수 있는 사탕개수와 구입하고 남은 돈을 구하기

	//현재 가지고 있는 돈: 10000
	//사탕가격: 1350
	//살 수 있는 사탕개수 : 몇개?
	//거스름돈 : 얼마?

	//나누기 연산자(/), 나머지 연산자(%)

	int money;	//현재 가지고 있는 돈
	int candy_price;	//사탕 가격


	std::cout << "현재 가지고 있는 돈 >>> " << std::endl;
	std::cin >> money;
	std::cout << "사탕 가격 >>> " << std::endl;
	std::cin >> candy_price;

	//현재 가지고 있는 돈으로 최대한 살 수 있는 사탕개수
	int n_candies = money / candy_price;
	std::cout << "최대로 살 수 있는 사탕개수: " << n_candies << std::endl;
	//std::cout << "최대한 살 수 있는 사탕개수: " << money / candy_price << std::endl;


	//구입하고 남은 돈(거스름돈)
	int change = money % candy_price;	//나머지
	std::cout << "구입하고 남은 돈: " << change << std::endl;
	//std::cout << "구입하고 남은 돈:" << money % candy_price << std::endl;

	return 0;
}