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
	point1.color = Color::Blue; //���� �����, � ������������ (0.0; 0.0; 0.0), �������
	Point point2 = { 1.4, -2.2, -3.98, Color::Red }; //���� �����, � ������������ (1.4; -2.2; -3.98), �������
	//x = 1.4, y = -2.2, z = -3.98, color = Color::Red
	point2.z = 32;  // ���������� � ����� ����� ����� �����
	point2.x += 2;  // � ������ �������� � ���� ��� � �������� �����������
	Point point3 = { .x = 1.4, .y = -2.2, .z = -3.98, .color = Color::Red }; //���� �����, ��� � � ������ �17, ������ ����� ������� � �������������
}