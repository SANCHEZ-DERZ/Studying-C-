#include <iostream>
#include <tuple>
enum class Color {
	White,
	Red,
	Orange,
	Blue,
};
struct Point {
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	Color color;
};
int main() {
	std::tuple<int, double, Point> t = { 42, 3.14, {.color = Color::Orange} };
	// но есть стандартная функция std::get<>,
	// которая принимает в угловых скобках индекс элемента (индексация с нуля):
	std::cout << std::get<0>(t) << "\n";//42
	std::cout << std::get<1>(t) << "\n";//3.14
	std::cout << std::get<2>(t).x << "\n";//0
	std::get<2>(t).x = 20;
	std::cout << std::get<2>(t).x;//20
}
