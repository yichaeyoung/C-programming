#include <iostream>
#include "iu.h"
#include "gong.h"
using namespace std;

int main() {
	iu::m();
	gong::g();

	return 0;
}

namespace iu {
	int f() {
		cout << "iu f() \n";
		return 1;
	}

	void m() {
		cout << "iu m() \n";
		f();
		gong::f();
	}
}

namespace gong {
	int f() {
		cout << "gong f() \n";
		return -1;
	}
	int g() {
		cout << "gong g() \n";

		f();
		iu::f();
		return 0;
	}
}