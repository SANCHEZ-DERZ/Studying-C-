#include <iostream>
#include <string>
int main() {
	std::string s1 = "Elementary, my dear Watson!";
	std::string s2 = s1;

	s1.clear(); //s2 ����� �� ���������

	std::cout << s1 << "\n"; //������ ������
	std::cout << s2 << "\n"; //Elementary, my dear Watson!
}