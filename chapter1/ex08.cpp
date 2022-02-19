#include <iostream>

void f(int x, int y)
{
    std::cout << "f(" << x << ", " << y
    << ") = " << 2 * x + y << std::endl;
}

int main()
{
    f(1, 2);
    f(182, 144);
    return 0;
}
