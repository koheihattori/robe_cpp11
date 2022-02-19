#include <iostream>

int main()
{
    int a = 0;
    int i = 0;
    
    std::cout << "####" << std::endl;
    
    while(a < 10)
    {
        std::cout << a << std::endl;
        a += 2;
    }
    
    std::cout << "####" << std::endl;

    i = 0;
    while(i != 0)
        std::cout << "Can you see this?" << std::endl;
    
    std::cout << "####" << std::endl;

    i = 0;
    do{
        std::cout << "Can you see this?" << std::endl;
    } while(i != 0);
    
    
    return 0;
}
