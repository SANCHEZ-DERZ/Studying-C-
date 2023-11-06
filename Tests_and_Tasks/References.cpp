#include <iostream>
int main() {
	int x = 42;
	int& ref = x; //—сылка на х

	++x;
	std::cout << ref << "\n"; // 43
}