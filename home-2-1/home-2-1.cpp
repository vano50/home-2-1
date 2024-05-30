#include <iostream>

enum class month {

    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    setlocale(LC_ALL, "Russian");

    int month_num = 1;
    while (month_num > 0) {


        std::cout << "Введите номер месяца или 0 для завершения работы программы ";
        std::cin >> month_num;

        if (month_num == 0) {
            std::cout << "До свидания";
            return 0;
        }

        switch (static_cast<month>(month_num)) {
        case month::January:std::cout << "January\n"; break;
        case month::February:std::cout << "February\n"; break;
        case month::March:std::cout << "March\n"; break;
        case month::April:std::cout << "April\n"; break;
        case month::May:std::cout << "May\n"; break;
        case month::June:std::cout << "June\n"; break;
        case month::July:std::cout << "July\n"; break;
        case month::August:std::cout << "August\n"; break;
        case month::September:std::cout << "September\n"; break;
        case month::October:std::cout << "October\n"; break;
        case month::November:std::cout << "November\n"; break;
        case month::December:std::cout << "December\n"; break;
        default: std::cout << "Не правильный номер" << std::endl;
        }
    }
    std::cout << "До свидания";

    return 0;
}