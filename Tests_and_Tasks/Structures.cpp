#include <iostream>
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
	Point point1;
	point1.color = Color::Blue; //Цвет точки, с координатами (0.0; 0.0; 0.0), голубой
	Point point2 = { 1.4, -2.2, -3.98, Color::Red }; //Цвет точки, с координатами (1.4; -2.2; -3.98), красный
	//x = 1.4, y = -2.2, z = -3.98, color = Color::Red
	point2.z = 32;  // обращаться к полям можно через точку
	point2.x += 2;  // и вообще работать с ними как с обычными переменными
	Point point3 = { .x = 1.4, .y = -2.2, .z = -3.98, .color = Color::Red }; //тоже самое, что и в строке №17, только более удобная и инициализация
}