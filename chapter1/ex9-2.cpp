#include <iostream>

int a = 0;

void Inc()
{
    int b = 0;
    a++;
    b++;
    std::cout << a << " <- a | b -> " << b << std::endl;
    return;
}

int main()
{
    Inc();
    Inc();
    Inc();
    return 0;
}
