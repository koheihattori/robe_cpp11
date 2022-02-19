#include <iostream>

int main()
{
    int a;
    
    std::cout << "input any integer X ...";
    std::cin >> a;
    
    std::cout << "x % 3 = "
    << a % 3 << "." << std::endl;
    
    return 0;
}
