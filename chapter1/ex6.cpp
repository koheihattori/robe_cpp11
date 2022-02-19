#include <iostream>

int main()
{
    int a = 0;
    
    a += 2;
    std::cout << "a += 2        -> a = " << a << std::endl;
    
    a++;
    std::cout << "a++           -> a = " << a << std::endl;
    
    a = a * 5 + a;
    std::cout << "a = a * 5 + a -> a = " << a << std::endl;
    
    return 0;
}
