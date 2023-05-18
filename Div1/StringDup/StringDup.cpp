#include <iostream>
#include <string>


int main()
{
    std::string seq;
    std::cin >> seq;
    int length_of_str = seq.length();
    int array[122] = { };
    for(unsigned int i = 0; i < length_of_str; i++)
    {
        array[(unsigned int)seq[i]]++;
    }

    int max = 0;
    char c = 0;
    for(unsigned int i = 0; i < 122; i++)
    {
        if(max < array[i])
        {
            max = array[i];
            c = i;
        }
    }
    std::cout << c << std::endl;
}