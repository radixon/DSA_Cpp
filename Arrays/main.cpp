#include <iostream>
#include "DynamicArray.h"
#include "StaticArray.h"


int main(){

    
    StaticArray arr(15);
    for(int i = 0; i < 15; i++)
    {
        arr.set_at(i,2*i + 5);
    }
    
    
    std::cout << "arr[0] = " << arr.get_at(0) << '\n';  
    std::cout << "arr[1] = " << arr.get_at(1) << '\n';  

    StaticArray tst = arr;
    std::cout << "tst sequence" << '\n';
    tst.iter_seq();

    DynamicArray foo(15);
    for(int i = 0; i < 15; i++)
    {
        foo.set_at(i,2*i + 5);
    }
    std::cout << "foo sequence" << '\n';

    DynamicArray foo_tst = foo;
    foo_tst.append(3);
    std::cout << "foo_tst sequence" << '\n';
    foo_tst.iter_seq();



    return 0;
}