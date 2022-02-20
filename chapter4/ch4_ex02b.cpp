#include <iostream>

using namespace std;

#define numof(array)  (sizeof (array) / sizeof *(array))

template <typename TYPE>
TYPE my___min_element(TYPE pBegin, TYPE pEnd)
{
    TYPE pMin;
    for(TYPE p = pMin = pBegin; p != pEnd; ++p)
        if(*p < *pMin)
            pMin = p;
    return pMin;
}

int main()
{
    int data[] = { 4, 2, 9, 7, 1, };
    
    cout << *my___min_element(data, data + numof(data)) << endl;
    
    return 0;
}

/*
 my___min_element とせずに min_element とすると、以下のようなエラーが出る。
 おそらく、/Applications/Xcode.app/略/usr/include/c++/v1/algorithm
 にも同名のmin_elementがあるのでambiguousだというエラー。
 そこでmy___min_elementとして作り直すとうまくいく。
 
 ch4_ex02b.cpp:21:14: error: call to 'min_element' is ambiguous
 cout << *min_element(data, data + numof(data)) << endl;
 ^~~~~~~~~~~
 /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/algorithm:2633:1: note:
 candidate function [with _ForwardIterator = int *]
 min_element(_ForwardIterator __first, _ForwardIterator __last)
 ^
 ch4_ex02b.cpp:8:6: note: candidate function [with TYPE = int *]
 TYPE min_element(TYPE pBegin, TYPE pEnd)
 ^
 1 error generated.
 */
