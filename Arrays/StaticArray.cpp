#include "StaticArray.h"
#include <new>

// Constructor
StaticArray::StaticArray(size_t arr_size = 0){
    size_ = arr_size;
    array_ = new T[size_];
}

// Destructor
StaticArray::~StaticArray(){
    delete [] array_;
}

// Copy Constructor
StaticArray::StaticArray(const StaticArray& value){
    size_ = value.size_;
    array_ = new T[value.size_]
}


// Copy List Initialization
std::pair<const T*, std::size_t> copy_arr const{
    return {&arr[0], arr.size()};
}