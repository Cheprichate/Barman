#include <iostream>
int BDay;
int BMonth;
int BYear;

int day;
int month;
int year;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите дату рождения клиента ( день, месяц, год ):\n ";
    std::cin >> BDay >> BMonth >> BYear;

    std::cout << "Введите текущую дату ( день, месяц, год ):\n ";
    std::cin >> day >> month >> year;

    if (year - BYear < 18) {
        std::cout << "Не продавать. ";
    }
    else if (year - BYear > 18) {
        std::cout << "Можно продать. ";
    }
    else if (month > BMonth || (month == BMonth && day > BDay)) {
        std::cout << "Можно продать. ";
    }
    else {
        std::cout << "Не продавать. ";
    }
}