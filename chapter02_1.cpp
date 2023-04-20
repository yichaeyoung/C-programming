#include <iostream>
//using namespace std; //std ���ӽ����̽����� ��� �Լ��� ������ ����� �� �ֵ��� ���� ���ѳ��Ҵ�.(���ӽ����̽��� ���� �ʾƵ� ��)
using std::cout; // std ���ӽ����̽����� cout ������ ����� �� �ֵ��� ���� ���ѳ��Ҵ�.(���ӽ����̽��� ���� �ʾƵ� ��)
using std::endl;
using std::cin;

//�Լ�����) ��ȯ�� �ڷ��� �Լ���(�Ű����� or �μ� or ����){ ó������ return ��ȯ��;}
namespace kakao {
	void func() {
		std::cout << "īī������ ������ �̸�Ƽ�� ��� ���α׷��Դϴ�." << std::endl;
	}


}

namespace kakao {
	void chatfunc() {
		std::cout << "īī������ ������ ä�� ��� ���α׷��Դϴ�." << std::endl;
	}


}

namespace line {
	void func() {
		std::cout << "���ο��� ������ �̸�Ƽ�� ��� ���α׷��Դϴ�." << std::endl;
	}


}

//1.using ������: ���� namespace�� ���� �Լ��� ������ ��� �����ͼ� ����� �� �ְ� �Ѵ�.
//--> �Լ� ȣ��ÿ� �տ� namespace���� ������ �� �ִ�.(namespace�� ���½�Ų��.)
//����) using namespace ���ӽ����̽���;
//kakao ���ӽ����̽� ���� ��� ������ �Լ����� ȣ���ؼ� ����� ��� �տ� ���ӽ����̽����� ���� �ʰ� ��밡���ϴ�.
using namespace kakao;

//2.using ������: ���� namespace�� ���� �ϳ��� �Լ��� ������ �����ͼ� ����� �� �ְ� �Ѵ�.
//->�Լ� ȣ��ÿ� �տ� namespace���� ������ �� �ִ�.(�ϳ��� ������ �ϳ��� �Լ��� ���½�Ų��
//����) using ���ӽ����̽���::�Լ��� or ������;
using kakao::chatfunc;
int main() {
	/*
	//namespace ���� �Լ����� ȣ���ؼ� ���
	//�Լ� ȣ��)�Լ���(�Ű�������)
	//void func() �Լ� ȣ��
	kakao::func();
	kakao::chatfunc();
	line::func();
	std::cout << "-------------------" << std::endl;
	
	//using namespace kakao;
	func();	//using������� open ���ѳ��� kakao�� func()�Լ� ȣ��
	chatfunc();
	line::func();	//using������� open ���ѳ��� ���� line�� func() �Լ� ȣ��
	std::cout << "-----------------" << std::endl;
	
	//using kakao::chatfunc;
	kakao::func();
	chatfunc();
	line::func();
	*/

	std::cout << "std::namespace �����ڷ� ���½��� ���ҽ��ϴ�." << std::endl;
	cout << "std::namespace �����ڷ� ���½��� ���ҽ��ϴ�." << endl;

	return 0;
}