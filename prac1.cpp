#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int temp, sum = 0;
	ifstream fin("a.txt");		//ifstream fin(" ");
	ofstream fout("b.txt");

	if (!fin || !fout) { cerr << "���� ���� ����\n"; return 1; }	
		//cerr: ���� ���� �޼����� ����ϴµ� ���, ���۾��� �ٷ� ��� ����
		//(!fin || !fout): ���� �ϳ��� ���⿡ ������ ��� �˻�
	for (int i = 0; i < 5; i++) {
		fin >> temp;
		sum += temp;
	}

	fout << "�հ�: " << sum << endl;
	fout << fixed;
	fout.precision(1);			//�Ҽ��� ���ڸ����� ��� �ϱ��ϱ�
	fout << "���: " << (double)sum / 5 << endl;
	fin.close();
	fout.close();

	cout << "ó�� �Ϸ�. b.txt�� ��� ����� Ȯ���ϼ���. \n";

	return 0;
}


/*
#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int temp, sum = 0;
	FILE* fa = fopen("a.txt", "r");
	FILE* fb = fopen("b.txt", "w");

	for (int i = 0; i < 5; i++) {
		fscanf(fa, "%d", &temp);
		sum += temp;
	}
	fprintf(fb, "�հ�: %d \n", sum);
	fprintf(fb, "���: %.1f \n", (double)sum/5);
	fclose(fa);
	fclose(fb);

	printf("ó�� �Ϸ�. b.txt�� ��� ����� Ȯ���ϼ���.\n");

	return 0;
}
*/