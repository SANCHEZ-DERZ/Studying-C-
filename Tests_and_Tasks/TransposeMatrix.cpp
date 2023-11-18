#include <iostream>
#include <vector>


std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) {
	std::vector<std::vector<int>> result;
	result.resize(matrix[0].size());
	for (size_t i = 0; i < result.size(); i++) {
		result[i].resize(matrix.size());
	}
	for (size_t i = 0; i < matrix.size(); i++) {
		for (size_t j = 0; j < matrix[i].size(); j++) {
			result[j][i] = matrix[i][j];
		}
	}
	return result;
}

int main() {
	std::vector<std::vector<int>> test = { {0, 1, 2}, {3, 4, 5} };
	for (size_t i = 0; i < Transpose(test).size(); i++) {
		for (size_t j = 0; j < Transpose(test)[i].size(); j++) {
			std::cout << Transpose(test)[i][j] << " ";
		}
		std::cout << "\n";
	}
}