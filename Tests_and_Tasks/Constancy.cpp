#include <iostream>
#include <vector>
int main() {
	const int c1 = 42; // Эта константа известна в Compile time

	int x;
	std::cin >> x;
	const int c2 = 2 * x; // Значение становится известным только в Run time


	const std::vector<int> v = { 1, 3, 5 };
	std::cout << v.size() << "\n"; // OK, напечатает 3


	int y = 42;

	int& ref = y; //Обычная ссылка
	const int& cref = y; // Константная ссылка
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

	int* ptr2 = &z;// Обычный указатель на z
	//ptr2 = &cz;

	const int* cptr1 = &z;
	cptr1 = &cz;// для указателя на константу можно менять адрес, но нельзя менять само значение (см. стр.48)

	int* const ptrc = &z;
	//ptrc = nullptr;

	const int* const cptrc = &x;
}