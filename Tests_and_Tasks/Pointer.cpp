#include <iostream>
struct Point {
	double x, y, z;
};
int main() {
	int x = 42;
	int* ptr1 = &x; //Сохраняем адрес в памяти переменной х в указатель ptr

	++x;
	std::cout << *ptr1 << "\n";//43
	std::cout << ptr1 << "\n";//Адрес переменной х

	Point p = { .x = 3.0, .y = 4.0, .z = 5.0 };

	Point* ptr2 = &p;

	std::cout << (*ptr2).x << "\n"; // Обращение через * и . требует скобок
	std::cout << ptr2->x << "\n";// то же самое, но чуть короче
}