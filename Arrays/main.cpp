#include <iostream>
#include "StaticArray.h"


int main(){

    int report[] = {2,21,6,6,4456,654,258,852,357,753};
    sArray arr(15);
    //arr = report;
    arr.set_at(0,1);
    
    std::cout << "arr[0] = " << arr.get_at(0) << '\n';    


    return 0;
}