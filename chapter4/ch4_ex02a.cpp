#include <iostream>
#include <algorithm>

using namespace std;

#define numof(array)  (sizeof (array) / sizeof *(array))

int main()
{
    int data[] = { 4, 2, 9, 7, 1, };
    
    cout << *min_element(data, data + numof(data)) << endl;
    
    return 0;
}
