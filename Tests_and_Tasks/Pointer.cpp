#include <iostream>
struct Point {
	double x, y, z;
};
int main() {
	int x = 42;
	int* ptr1 = &x; //��������� ����� � ������ ���������� � � ��������� ptr

	++x;
	std::cout << *ptr1 << "\n";//43
	std::cout << ptr1 << "\n";//����� ���������� �

	Point p = { .x = 3.0, .y = 4.0, .z = 5.0 };

	Point* ptr2 = &p;

	std::cout << (*ptr2).x << "\n"; // ��������� ����� * � . ������� ������
	std::cout << ptr2->x << "\n";// �� �� �����, �� ���� ������
}