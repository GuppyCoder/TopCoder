#include <iostream>

struct Math
{
    int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Math mathobj;
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << "The sum of both integers is " << mathobj.add(a, b) << std::endl;
}