#include <iostream>

int ChangeToShowa(int a)
{
    if(1926 <= a && a <= 1989)
        return a - 1925;
    else
        return 0;
}

void Showa()
{
    int a;
    
    std::cout << "西暦を入力して下さい > ";
    std::cin >> a;
    
    if(ChangeToShowa(a))
        std::cout << "その年は昭和 " << ChangeToShowa(a)
        << " 年です。" << std::endl;
    else
        std::cout << "その年は昭和ではありません。" << std::endl;
}

int main()
{
    Showa();
    Showa();
    return 0;
}
