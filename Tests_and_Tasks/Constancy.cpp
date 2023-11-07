#include <iostream>
#include <vector>
int main() {
	const int c1 = 42; // ��� ��������� �������� � Compile time

	int x;
	std::cin >> x;
	const int c2 = 2 * x; // �������� ���������� ��������� ������ � Run time


	const std::vector<int> v = { 1, 3, 5 };
	std::cout << v.size() << "\n"; // OK, ���������� 3


	int y = 42;

	int& ref = y; //������� ������
	const int& cref = y; // ����������� ������
	++y; // OK
	++ref; // OK
	//++cref; // Error

	int* ptr = &y;
	const int* cptr = &y;
	++*ptr;
	//++*cptr; //Error


	const int cx = 14;

	//int& ref1 = cx;// Error
	const int& cref1 = cx; // OK

	//int* ptr1 = &cx; //Error
	const int* cptr = &cx; //OK


	int z = 17;
	const int cz = 12;

	int* ptr2 = &z;// ������� ��������� �� z
	//ptr2 = &cz;

	const int* cptr1 = &z;
	cptr1 = &cz;// ��� ��������� �� ��������� ����� ������ �����, �� ������ ������ ���� �������� (��. ���.48)

	int* const ptrc = &z;
	//ptrc = nullptr;

	const int* const cptrc = &x;
}