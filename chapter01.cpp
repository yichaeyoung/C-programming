#include<iostream>

//�Է°� ���
//1.���: 
//��� ����)std::cout << ��³��� << std::endl
//<< ��� ������ : ��� �׸���� �����ؼ� ����Ѵ�.

int main() {
	/*
	//�ڱ� �Ұ��� ����մϴ�.
	//�̸�, ����, ������, Ű�� ����Ѵ�.

	//�̸��� ȫ�浿 �Դϴ�.
	//���̴� 20�� �Դϴ�.
	//�������� A�� �Դϴ�.
	//Ű�� 175.5cm �Դϴ�.
	
	//��� ����)std::cout << ��³��� << std::endl
	std::cout << "�̸��� ȫ�浿 �Դϴ�." << std::endl;
	std::cout << "���̴� 20�� �Դϴ�." << std::endl;
	std::cout << "�������� A�� �Դϴ�." << std::endl;
	std::cout << "Ű�� 175.5cm �Դϴ�." << std::endl;
	std::cout << "--------------------" << std::endl;

	//������ �̿��� ���
	char name[10] = "ȫ�浿";	//���ڿ��� ū����ǥ�� �ٿ��� ������ �־��ֱ�
	int age = 20;
	char blood = 'A';	//���� �ϳ��� ���� ����ǥ�� �ٿ��� ������ �־��ֱ�
	double height = 175.5;

	//printf("%s\n", name);
	std::cout << "�̸� : " << name << std::endl;
	std::cout << "���� : " << age << std::endl;
	std::cout << "������ : " << blood << std::endl;
	std::cout << "Ű : " << height << std::endl;
	std::cout << "--------------------" << std::endl;

	//������ �̿��� �Է�(Ű����� ���� �Է¹��� �����͸� ������ �����Ű��)
	//scanf("%d",&age)
	//std::cin >> ������ ������;
	// >> �Է¿����� : �Է� �׸���� �����ؼ� ����Ѵ�.

	//������ ���� �غ� --> �޸� ���� Ȯ��
	char name1[10];
	int age1;
	char blood1;
	double height1;

	std::cout << "�̸��� �Է��ϼ��� >>> " << std::endl;
	std::cin >> name1;	//Ű����� ������ �Է��ϸ�  name1������ �����
	std::cout << "���̸� �Է��ϼ��� >>> " << std::endl;
	std::cin >> age1;	//Ű����� ������ �Է��ϸ�  age1������ �����
	std::cout << "�������� �Է��ϼ��� >>> " << std::endl;
	std::cin >> blood1;	//Ű����� ������ �Է��ϸ�  blood1������ �����
	std::cout << "Ű�� �Է��ϼ��� >>> " << std::endl;
	std::cin >> height1;	//Ű����� ������ �Է��ϸ�  height1������ �����

	std::cout << "�̸� : " << name1 << std::endl;
	std::cout << "����: " << age1 << std::endl;
	std::cout << "������ : " << blood1 << std::endl;
	std::cout << "Ű : " << height1 << std::endl;
	

	char name2[10];
	int age2;
	char blood2;
	double height2;

	std::cout << "�̸�, ����, ������, Ű�� �Է��ϼ���.(�� �׸��� �����̽�, tab, enter�� ����) >>> " << std::endl;
	//scanf("%s %d %c %lf", &name2, &age2, &blood2, &height2)
	std::cin >> name2 >> age2 >> blood2 >> height2;
	std::cout << "�̸� : " << name2 << ", ���� : " << age2 << ", ������: " << blood2 << ", Ű: " << height2 << std::endl;
	*/

	//���� ������ �ִ� ���� ������ ������ Ű����� �Է¹޾� ������ �����ϰ�,
	//���� ������ �ִ� ������ �ִ��� �� �� �ִ� ���������� �����ϰ� ���� ���� ���ϱ�

	//���� ������ �ִ� ��: 10000
	//��������: 1350
	//�� �� �ִ� �������� : �?
	//�Ž����� : ��?

	//������ ������(/), ������ ������(%)

	int money;	//���� ������ �ִ� ��
	int candy_price;	//���� ����


	std::cout << "���� ������ �ִ� �� >>> " << std::endl;
	std::cin >> money;
	std::cout << "���� ���� >>> " << std::endl;
	std::cin >> candy_price;

	//���� ������ �ִ� ������ �ִ��� �� �� �ִ� ��������
	int n_candies = money / candy_price;
	std::cout << "�ִ�� �� �� �ִ� ��������: " << n_candies << std::endl;
	//std::cout << "�ִ��� �� �� �ִ� ��������: " << money / candy_price << std::endl;


	//�����ϰ� ���� ��(�Ž�����)
	int change = money % candy_price;	//������
	std::cout << "�����ϰ� ���� ��: " << change << std::endl;
	//std::cout << "�����ϰ� ���� ��:" << money % candy_price << std::endl;

	return 0;
}