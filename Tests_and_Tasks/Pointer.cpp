#include <iostream>
int main() {
	int x = 42;
	int* ptr = &x; //��������� ����� � ������ ���������� � � ��������� ptr

	++x;
	std::cout << *ptr << "\n";//43
	std::cout << ptr << "\n";//����� ���������� �
}