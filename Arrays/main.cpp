#include <iostream>
#include "Array_.h"

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
    foo_tst.insert_last(3);
    std::cout << "foo_tst sequence" << '\n';
    foo_tst.iter_seq();

    std::cout << "foo_tst size: " << foo_tst.len() << '\n';

    std::cout << "foo_tst sequence after delete_last() function" << '\n';
    foo_tst.delete_last();
    foo_tst.iter_seq();

    std::cout << "foo_tst size: " << foo_tst.len() << '\n';

    std::cout << "foo_tst sequence after insert_first(x) function" << '\n';
    foo_tst.insert_first(379);
    foo_tst.iter_seq();

    std::cout << "foo_tst size: " << foo_tst.len() << '\n';

    std::cout << "foo_tst sequence after delete_first() function" << '\n';
    foo_tst.delete_first();
    foo_tst.iter_seq();

    std::cout << "foo_tst size: " << foo_tst.len() << '\n';

    std::cout << "foo_tst sequence after insert_at(12,144) function" << '\n';
    foo_tst.insert_at(12,144);
    foo_tst.iter_seq();

    std::cout << "foo_tst size: " << foo_tst.len() << '\n';

    std::cout << "foo_tst sequence after delete_at(7) function" << '\n';
    foo_tst.delete_at(7);
    foo_tst.iter_seq();

    std::cout << "foo_tst size: " << foo_tst.len() << '\n';

    StackArray<int, 20> flea;
    for(int i = 0; i < flea.len(); i++)
    {
        flea[i] = i*i - 2*i + 3;
    }
    std::cout << "flea sequence" << '\n';
    flea.iter_seq();



    return 0;
}