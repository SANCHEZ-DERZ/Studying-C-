#include <iostream>
enum class Color {
    White,
    Red,
    Orange,
    Blue,
};
int main() {
    Color color1 = Color::Red;
    Color color2 = Color::White;
    int value = static_cast<int>(color2);
    std::cout << value << '\n'; //0
    Color color3 = static_cast<Color>(2); //Orange
}