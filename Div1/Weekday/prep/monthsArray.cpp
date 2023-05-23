#include <iostream>

// given the month and day can you tell how many days have passed

int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int month = 0, day = 0, year = 0;

    std::cin >> month >> day >> year;

    std::cout << month << ' ' << day << ' ' << year << ' ';
    int total_days = 0;
    for(int i = 0; i < (year - 1990) * 12 + month - 1; i++)
    {
        if((i >= 24 && i < 36) || (i >= 72 && i < 84))
        {
            months[1] = 29;
        }
        else
        {
            months[1] = 28;
        }

        int j = i % 12;
        total_days += months[j];
    }

    total_days += day;
    
    switch((total_days - 1) % 7)
    {
        case 0:
            std::cout << "Monday" << std::endl;
            break;
        case 1:
            std::cout << "Tuesday" << std::endl;
            break;
        case 2:
            std::cout << "Wednesday" << std::endl;
            break;
        case 3:
            std::cout << "Thursday" << std::endl;
            break;
        case 4:
            std::cout << "Friday" << std::endl;
            break;
        case 5:
            std::cout << "Saturday" << std::endl;
            break;
        case 6:
            std::cout << "Sunday" << std::endl;
            break;
    }

}