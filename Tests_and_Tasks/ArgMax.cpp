#include <iostream>
#include <vector>
#include <utility>


std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
	size_t max_i = 0;
	size_t max_j = 0;
	int max = -100000000;
	for (size_t i = 0; i < matrix.size(); i++) {
		for (size_t j = 0; j < matrix[i].size(); j++) {
			if (matrix[i][j] > max) {
				max_i = i;
				max_j = j;
				max = matrix[i][j];
			}
		}
	}
	std::pair<size_t, size_t> p = { max_i, max_j };
	return p;
}


int main() {
	size_t n = 0;
	size_t k = 0;
	std::cin >> n >> k;
	std::vector<std::vector<int>> matrix(n);
	for (size_t i = 0; i < matrix.size(); i++) {
		matrix[i].resize(k);
		for (size_t j = 0; j < matrix[i].size(); j++) {
			std::cin >> matrix[i][j];
		}
	}
	std::cout << MatrixArgMax(matrix).first << " ";
	std::cout << MatrixArgMax(matrix).second;
}