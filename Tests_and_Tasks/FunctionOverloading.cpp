#include <iostream>
#include <string>



/*int f(int x) { 
	return x;
}


int f(int y) {  ������ ����������: ������� � ����� ����� � ���������� ��� ����
	return 2 * y;
}


double f(int x) {   ������ ����������: ����������� �� ����������� �������� ������
	return 3 * x;
}
*/

void Print(int value) {
	std::cout << value << "\n";
}


void Print(const std::string& name, int value) {
	std::cout << name << ": " << value << "\n";
}


void Print(const std::string& str) {
	std::cout << str << "\n";
}


int main() {
	Print(42); // ������ 1
	Print("x", 42); // ������ 2
	Print("good bye"); // ������ 3
}