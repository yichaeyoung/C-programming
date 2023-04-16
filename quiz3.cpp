#include <iostream>
#include "iu.h"
#include "gong.h"
using namespace std;

int main() {
	cout << "iu의 세 변수 출력 \n";
	cout << iu::aout << ' ' << iu::bout << ' ' << iu::cout << endl;
	
	cout << "gong의 변수 한 개 출력\n";
	cout << gong::a << endl;

	return 0;
}