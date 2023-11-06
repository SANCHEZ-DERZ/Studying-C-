#include <iostream>
int main() {
	int x = 42;
	int& ref = x; //—сылка на х

	++x;
	std::cout << ref << "\n"; // 43

	std::string s1 = "Elementary, my dear Watson!";
	std::string& s2 = s1; //—сылка на s1

	s1.clear();

	std::cout << s2.size() << "\n"; //0
}