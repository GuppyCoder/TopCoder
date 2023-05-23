#include <iostream>
#include <string>

struct Weekday
{
    std::string getDay(int month, int year, int day);
};

int main()
{
    int month = 0, day = 0, year = 0;
    std::cin >> month >> day >> year;
    Weekday obj;
    std::string day_s = "";
    day_s = obj.getDay(month, year, day);
    std::cout << day_s << std::endl;
}



std::string Weekday::getDay(int month, int year, int day)
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
            return "Monday";
            
        case 1:
            return "Tuesday";
            
        case 2:
            return "Wednesday";
            
        case 3:
            return "Thursday";
            
        case 4:
            return "Friday";
            
        case 5:
            return "Saturday";
            
        case 6:
            return "Sunday";
    }

    return "error";
}