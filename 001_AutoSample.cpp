#include<iostream>
int main() {
	int a = 10;
	int b(a);
	auto c(b);	// �ʱⰪ�� ���Ŀ� ���� �����ϴ� �ν��Ͻ��� ������ �ڵ����� ������

	std::cout << a + b + c << std::endl;

	return 0;
}