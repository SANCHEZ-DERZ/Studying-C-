#include <string>
#include <iostream>


template <typename T1, typename T2, typename T3>
struct Triple {
	T1 first;
	T2 second;
	T3 third;
};


int main() {
	Triple<int, int, int> point = { -1, 2, 3 };
	Triple<std::string, std::string, int> word = { "Hello", "world", 42 };
	Triple test = { 1, 2, 2.1 };
	std::cout << point.first << " " << point.second << " " << point.third << "\n";
}