#include <iostream>
int Sum(int a, int b) { // В заголовке функции указывается тип возращаемого значения
	return a + b;
}
void DoSomething(double d, char c) {
	// ...
	// писать return в конце такой функции не обязательно
	// Но если требуется завершить функцию, можно написать просто return;
}
int main() {
	int x = 17;
	int y = 42;
	int z = Sum(x, y);
	DoSomething(3.14, '@');
	std::cout << z;
}