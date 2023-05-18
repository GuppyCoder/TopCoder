#include <iostream>
#include <string>

struct StringDup
{
    char getMax(std::string& seq);
    private:
        int array[122] = {};
};

int main()
{
    StringDup str_dup_obj;
    std::string seq;
    std::cin >> seq;
    char max_char = str_dup_obj.getMax(seq);
    std::cout << max_char << std::endl;
}


char StringDup::getMax(std::string& seq)
{
    int length_of_str = seq.length();
    for(int i = 0; i < length_of_str; i++)
    {
        array[(unsigned int)seq[i]]++;
    }
    int max = 0;
    char c = 0;
    for(int i = 0; i < 122; i++)
    {
        if(max < array[i])
        {
            max = array[i];
            c = i;
        }
    }
    return c;
}