#include <iostream>
#include <string>

int main()
{
    int array[100] = {};

    // for(auto i: array)
    // {
    //     std::cout << i << std::endl;
    // }

    std::string seq = "aaaa";
    for(int c: seq)
    {
        std::cout << c << std::endl;
        array[c]++;
    }

    std::cout << array[97] << std::endl;

    for(int i = 0; i < seq.length(); i++)
    {
        std::cout << (int)seq[i];
    }
    std::cout << std::endl;
}