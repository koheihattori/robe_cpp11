#include <iostream>

int main()
{
    int i;
    int a = 0;

    std::cout << "..." << std::endl;
    for(i = 5; i < 10; i += 2)
        std::cout << i << std::endl;
    
    
    for(i = 10000; i < 10; i++)
        std::cout << i << std::endl;

    std::cout << "..." << std::endl;
    a=0;
    for(i = 0; a < 10; i++)
    {
        std::cout << i << ", " << a << std::endl;
        a += 2;
    }
    
    std::cout << "..." << std::endl;
    
    a=0;
    for(; a < 10;)
    {
        std::cout << a << std::endl;
        a += 2;
    }
    
    return 0;
}
