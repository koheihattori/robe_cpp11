#include <iostream>  // ".h" is not needed.

// using しなければ、std::cout や
// std::endl のように使うことになります
/*
 Without "using" statement,
 we always need to use "std::endl" instead of "endl"
 */
using namespace std;

int main()
{
    cout << "Hi!!" << endl;
    return 0;
}
