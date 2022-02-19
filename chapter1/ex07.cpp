#include <iostream>

int f(int x, int y)
{
    return 2 * x + y;
}

int main()
{
    std::cout << "f(1, 2) = " << f(1, 2) << std::endl;
    std::cout << "f(182, 144) = " << f(182, 144) << std::endl;
    
    return 0;
}
