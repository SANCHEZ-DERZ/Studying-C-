#include <iostream>
#include <vector>
#include <string>


std::string CommonPrefix(const std::vector<std::string>& words) {
	std::string prefix = "";
	char letter = words[0][0];
	int flag = 0;
	if (words.size() == 0) {
		return "";
	}
	else {
		for (int i = 0; i < words.size(); i++) {
			for (int j = 0; j < words[i].size(); j++) {
				if (letter == words[i][j]) {
					flag += 1;
				}
				if (flag == words.size())
				letter = words[i][j];
			}
		}
		return prefix;
	}
}


int main() {
	std::vector<std::string> words(3);
	for (int i = 0; i < words.size(); i++) {
		std::cin >> words[i];
	}
	std::cout << CommonPrefix(words);
}