#include <iostream>
int main() {
	int x = 42;
	int* ptr = &x; //Сохраняем адрес в памяти переменной х в указатель ptr

	++x;
	std::cout << *ptr << "\n";//43
	std::cout << ptr << "\n";//Адрес переменной х
}