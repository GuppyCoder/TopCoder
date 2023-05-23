#include <iostream>

int main()
{
    switch(9%10)
    {
        case 9:
            std::cout << "Remainder of 9 / 10 is 9" << std::endl;
            break;
        default:
            std::cout << "There is a misunderstanding" << std::endl;
    };
    return 0;
}