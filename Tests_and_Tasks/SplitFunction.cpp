#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> Split(const std::string& str, char delimiter) {
	std::vector<std::string> words;
	std::string word = "";
	if (str.size() == 0) {
		words.push_back("");
		return words;
	}
	else {
		for (size_t i = 0; i < str.size(); i++) {
			if (str[i] != delimiter) {
				word += str[i];
			}
			if (str[i] == delimiter || i == str.size() - 1) {
				words.push_back(word);
				word = "";
			}
		}
		if (str.back() == delimiter) {
			words.push_back("");
		}
		return words;
	}
}


int main() {
	std::string name;
	std::cin >> name;

	for (int i = 0; i < Split(name, '_').size(); i++) {
		std::cout << Split(name, '_')[i] << '|' << "\n";
	}
}