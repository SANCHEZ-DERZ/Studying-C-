#include <algorithm>
#include <vector>

struct Date {
    int year, month, day;
};

int main() {
    std::vector<Date> dates;
    std::sort(dates.begin(), dates.end(), [](const Date& lhs, const Date& rhs) {
        return std::tie(lhs.month, lhs.day) < std::tie(rhs.month, rhs.day);
        });
}