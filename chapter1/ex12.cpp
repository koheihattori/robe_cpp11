#include <iostream>

void Divide()
{
    int a, b;
    
    std::cout << "１番目の値を入力してください > ";
    std::cin >> a;
    
    std::cout << "２番目の値を入力してください > ";
    std::cin >> b;
    
    if(b == 0)
    {
        std::cout << "０では割れません！" << std::endl;
    }
    else
    {
        std::cout << a << " / " << b << " = "
        << a / b << " ... " << a % b << std::endl;
    }
    return;
}

int main()
{
    Divide();
    Divide();
    return 0;
}
