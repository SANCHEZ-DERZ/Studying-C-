#include <iostream>
#include <vector>
int main() {
	std::vector<int> a = { 1, 2, 3, 4, 5 };
	for (int elem : a) {
		std::cout << elem << " ";
	}
}