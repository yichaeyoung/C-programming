#include <iostream>
#include <fstream>
using namespace std;
int main() {

	double arr[31];
	ifstream fin("sort_before.txt");
	ofstream fout("sort_after.txt");

	for (int i = 0; i < 31; i++)fin >> arr[i];
	for (int i = 0; i < 31; i++)fout << arr[i];

	fin.close();
	return 0;

}