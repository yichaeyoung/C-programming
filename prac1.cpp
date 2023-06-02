#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int temp, sum = 0;
	ifstream fin("a.txt");		//ifstream fin(" ");
	ofstream fout("b.txt");

	if (!fin || !fout) { cerr << "파일 열기 실패\n"; return 1; }	
		//cerr: 오류 관련 메세지를 출력하는데 사용, 버퍼없이 바로 출력 가능
		//(!fin || !fout): 둘중 하나라도 열기에 실패한 경우 검사
	for (int i = 0; i < 5; i++) {
		fin >> temp;
		sum += temp;
	}

	fout << "합계: " << sum << endl;
	fout << fixed;
	fout.precision(1);			//소수점 한자리까지 출력 암기하기
	fout << "평균: " << (double)sum / 5 << endl;
	fin.close();
	fout.close();

	cout << "처리 완료. b.txt를 열어서 결과를 확인하세요. \n";

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
	fprintf(fb, "합계: %d \n", sum);
	fprintf(fb, "평균: %.1f \n", (double)sum/5);
	fclose(fa);
	fclose(fb);

	printf("처리 완료. b.txt를 열어서 결과를 확인하세요.\n");

	return 0;
}
*/