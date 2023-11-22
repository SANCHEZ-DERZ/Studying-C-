#include <iostream>
#include <vector>
#include <string>


std::string CommonPrefix(const std::vector<std::string>& words) {
	std::string prefix = "";
	size_t flag = 0;
	char letter{};
	char common_l{};
	size_t min_lenght = 0;
	if (words.size() == 0) {
		return "";
	}
	else if (words.size() == 1) {
		return words[0];
	}
	else {
		min_lenght = words[0].size();
		for (size_t i = 0; i < words.size(); i++) {
			if (min_lenght < words[i].size()) {
				min_lenght = words[i].size();
			}
		}
		for (size_t z = 0; z < min_lenght; z++) {
			common_l = words[0][z];
			for (size_t i = 0; i < words.size(); i++) {
				for (size_t j = 0; j < words[i].size(); j++) {
					if (common_l == words[i][j] && j == z) {
						flag += 1;
						letter = words[i][j];
					}
				}
			}
			if (flag == words.size()) {
				prefix += letter;
			}
			flag = 0;
		}
		return prefix;
	}
}


int main() {
	int n = 0;
	std::cin >> n;
	std::vector<std::string> words(n);
	for (int i = 0; i < words.size(); i++) {
		std::cin >> words[i];
	}
	std::cout << CommonPrefix(words);
}