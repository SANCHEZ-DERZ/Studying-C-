#include <iostream>
int Sum(int a, int b) { // � ��������� ������� ����������� ��� ������������ ��������
	return a + b;
}
void DoSomething(double d, char c) {
	// ...
	// ������ return � ����� ����� ������� �� �����������
	// �� ���� ��������� ��������� �������, ����� �������� ������ return;
}
int main() {
	int x = 17;
	int y = 42;
	int z = Sum(x, y);
	DoSomething(3.14, '@');
	std::cout << z;
}