#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    while(1)
    {
        cout << "１番目の値を入力してください > ";
        cin >> a;
        
        cout << "２番目の値を入力してください > ";
        cin >> b;
        
        if(b == 0)
        {
            cout << "０では割れません！" << endl;
            break;
        }
        
        cout << a << " / " << b << " = "
        << a / b << " ... " << a % b << endl;
    }
    
    cout << "プログラムは終了しました。" << endl;
    return 0;
}
