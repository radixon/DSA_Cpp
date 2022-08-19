#include "StaticArray.h"
#include <iostream>

int main(){

    
    int StaticArray[] = {1,2,3,4,5};
    
    std::cout << StaticArray[2] << std::endl;
/*
    arr[2] = 25;
    std::cout << arr[2] << std::endl;

    StaticArray<int> val[5];
    val[4] = 115;
    std::cout << val[4] << std::endl;
*/

    return 0;
}