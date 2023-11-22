#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>


struct Points {
	int x = 0;
	int y = 0;
};


bool operator < (const Points& lhs, const Points& rhs) {
	if (lhs.x * lhs) {
		return left < right;
	}
}


int main() {
	std::vector<std::pair<int, int>> test = { {2, 3}, {1, 2} };
	std::sort(test.begin(), test.end(), operator<);
	for (size_t i = 0; i < test.size(); i++) {
		std::cout << test[i].first << " " << test[i].second << "\n";
	}
}