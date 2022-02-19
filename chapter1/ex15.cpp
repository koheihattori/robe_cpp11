#include <iostream>

int main()
{
    int a[2];
    
    a[0] = 100;
    std::cout << "a[0] = " << a[0] << std::endl;
    
    a[1] = 200;
    std::cout << "a[0] = " << a[0] << std::endl;
    
    a[0] = 300;
    std::cout << "a[0] = " << a[0] << std::endl;
    
    return 0;
}
