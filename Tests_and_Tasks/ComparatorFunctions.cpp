#include <algorithm>
#include <iostream>
#include <vector>

struct Date {
	int year = 1970;
	int month = 1;
	int day = 1;
};

bool operator < (const Date& lhs, const Date& rhs) {
	if (lhs.year != rhs.year) {
		return lhs.year < rhs.year;
	}
	if (lhs.month != rhs.month) {
		return lhs.month < rhs.month;
	}
	if (lhs.day != rhs.day) {
		return lhs.day < rhs.day;
	}
	/*
	����� ������� ������ ������
	return std::tie(lhs.year, lhs.month, lhs.day) < std::tie(rhs.year, rhs.month, rhs.day);
	���������� ������ �� ������, ��� �������� ��� ���������� ������������������ (��������������) ���������
	*/
}

bool CompareWithoutYear(const Date& rhs, const Date& lhs) { //���������� ��� ����� ����
	return std::tie(lhs.month, lhs.day) < std::tie(rhs.month, rhs.day);
}

int main() {
	setlocale(LC_ALL, "RUS");
	std::vector<Date> dates = {
		{.year = 2020, .month = 3, .day = 15},
		{.year = 2019, .month = 1, .day = 21},
		{.year = 2021, .month = 1, .day = 30},
	};

	std::sort(dates.begin(), dates.end(), operator<); // ���������� � ��������������� �������
	std::sort(dates.begin(), dates.end(), CompareWithoutYear); //���������� ��� ����� ����

	// ���������� ����������:
	for (const auto& [year, month, day] : dates) {
		std::cout << year << "." << month << "." << day << "\n";
	}
}