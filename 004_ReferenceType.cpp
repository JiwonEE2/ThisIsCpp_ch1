#include<iostream>
using namespace std;
int main() {
	int nData = 10;

	// nData ������ ���� ������ ����
	int& ref = nData;

	// �������� ���� �����ϸ� ������ ����ȴ�
	ref = 20;
	cout << nData << endl;

	// �����͸� ���� �Ͱ� ���
	int* pnData = &nData;
	*pnData = 30;
	cout << nData << endl;
}