#include<iostream>
using namespace std;
int main() {
	// ��ü�� �迭 ���·� ���� ����
	int* arr = new int[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	// �迭 ���·� ������ ����� �ݵ�� �迭 ���¸� ���� ����
	delete[] arr;

	return 0;
}