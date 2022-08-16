#include "StaticArray.h"
#include <iostream>

int main(int argc, char *argv[])
{

    int StaticArray(5);
    std::cout << StaticArray.array_[0] << std::endl;

    return 0;
}