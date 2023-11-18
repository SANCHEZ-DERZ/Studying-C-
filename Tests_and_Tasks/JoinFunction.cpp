#include <iostream>
#include <vector>
#include <string>


std::string Join(const std::vector<std::string>& tokens, char delimiter) {
	std::string result = "";
	if (tokens.size() == 0) {
		return "";
	}
	else if (tokens.size() == 1){
		return tokens[0];
	}
	else {
		for (size_t i = 0; i < tokens.size(); i++) {
			if (i == 0) {
				result += tokens[i];
			}
			else {
				result += delimiter + tokens[i];
			}
		}
		return result;
	}
}


int main() {
	std::vector<std::string> test(5);
	for (size_t i = 0; i < test.size(); i++) {
		std::cin >> test[i];
	}
	std::cout << Join(test, '-');
}