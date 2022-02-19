#include <iostream>

void Birthmonth()
{
    int a;
    
    std::cout << "What is your birth month? ... ";
    std::cin >> a;
    
    if(1 <= a && a <= 12)
    {
        std::cout << "Oh, you were born in " << a
        << "th month of the year!" << std::endl;
    }
    else
    {
        std::cout << a << "Upps..." << std::endl
        << "Your input is invalid." << std::endl;
    }
}

int main()
{
    Birthmonth();
    Birthmonth();
    return 0;
}
