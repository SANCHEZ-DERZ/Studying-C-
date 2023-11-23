#include <iostream>
#include <string>



/*int f(int x) { 
	return x;
}


int f(int y) {  ошибка компил€ции: функци€ с таким типом и параметром уже была
	return 2 * y;
}


double f(int x) {   ошибка компил€ции: перегружать по воращаемому значению нельз€
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
	Print(42); // верси€ 1
	Print("x", 42); // верси€ 2
	Print("good bye"); // верси€ 3
}