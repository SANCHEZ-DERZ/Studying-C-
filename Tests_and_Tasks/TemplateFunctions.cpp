#include <iostream>
#include <vector>
#include <string>


template <typename T>
T Max(const T& x, const T& y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}


int main() {
	std::cout << Max<double>(3.14, 5.21) << "\n";
	std::cout << Max<std::string>("max", "minimum") << "\n";
	std::cout << Max(3, 5) << "\n"; //параметры шаблона в угловых скобках можно не писать: компилятор попытается сам угадать эти параметры по типу аргументов

}