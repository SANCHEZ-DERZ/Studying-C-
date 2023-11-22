#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>


std::vector<std::pair<int, int>> SortingPoints (std::vector<std::pair<int, int>>& points) {
	std::vector<std::pair<int, int>> result = {};
	std::vector<int> hypoth = {};
	for (size_t i = 0; i < points.size(); i++) {
		hypoth.push_back(points[i].first * points[i].first + points[i].second * points[i].second);
	}
	std::sort(hypoth.begin(), hypoth.end());
	for (size_t i = 0; i < hypoth.size(); i++) {
		for (size_t j = 0; j < points.size(); j++) {
			if (hypoth[i] == points[j].first * points[j].first + points[j].second * points[j].second) {
				result.push_back(points[j]);
				points[j].first = 1000;
				points[j].second = 1000;
				break;
			}
		}
	}
	return result;
}


int main() {
	int n = 0;
	std::cin >> n;
	std::vector<std::pair<int, int>> test(n);
	for (size_t i = 0; i < test.size(); i++) {
		std::cin >> test[i].first >> test[i].second;
	}
	for (const auto& elem : SortingPoints(test)) {
		std::cout << elem.first << " " << elem.second << "\n";
	}
}