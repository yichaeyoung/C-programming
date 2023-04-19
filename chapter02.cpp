#include <iostream>



//���ӽ����̽�(namespace)
//������ ���� �̸��� �ٿ����Ҵ�
//-->Ư�� ������ ���� �̸��� �ٿ��ֱ� ���� ������ ����̴�.
//���������� �Լ������ �ߺ��� ���Ƽ� �浹�� �����ϱ� ���ؼ��̴�.
//����)namespace �����̸� {�Լ�, ����}


namespace AAA {
	int num = 10;

	namespace BBB {
		int num = 20;

		namespace CCC {
			int num = 30;
		}
	}
		
		

}

int num = 40;	//��������
//namespace ��Ī ����� : ������ namespace���� ã�ư��� ��θ��� ���̱� ���ؼ� ����Ѵ�.
//����) namespace ��Ī(���ο� namespace��) = ����namespace��

namespace A = AAA;
namespace AB = AAA::BBB;
namespace ABC = AAA::BBB::CCC;

int main() {

	//������������(::) --> namespace ������ �����Ҷ� ���(��ȿ����)
	std::cout << "AAA::num = " << AAA::num << std::endl;
	std::cout << "AAA::BBB::num = " << AAA::BBB::num << std::endl;
	std::cout << "AAA::BBB::CCC::num = " << AAA::BBB::CCC::num << std::endl;
	std::cout << "-------------" << std::endl;

	//namespace ��Ī�� �����ؼ� ���
	std::cout << "A::num = " << A::num << std::endl;
	std::cout << "AB::num = " << AB::num << std::endl;
	std::cout << "ABC::num = " << ABC::num << std::endl;
	std::cout << "-------------" << std::endl;

	//���� ���� ���
	std::cout << "�������� ::num = " << ::num << std::endl;
	std::cout << "-------------" << std::endl;

	
	int sum1 = A::num + AB::num + ABC::num + ::num;
	std::cout << "num ������ ��� ���� �� = " << sum1 << std::endl;
	std::cout << "-------------" << std::endl;

	return 0;
}