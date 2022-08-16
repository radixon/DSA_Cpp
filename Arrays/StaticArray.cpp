#include "StaticArray.h"
#include <new>

// Constructor
template <typename T>
StaticArray::StaticArray(size_t arr_size = 0){
    size_ = arr_size;
    array_ = new T[size_];
}


// Destructor
StaticArray::~StaticArray(){
    delete [] array_;
}

// Copy Constructor
template <typename T>
StaticArray::StaticArray(const StaticArray& value){
    size_ = value.size_;
    array_ = new T[value.size_]
}

// Move Constructor
StaticArray(StaticArray &&argument) noexcept : arg(argument.arg);

// Overloaded Copy Assignment
StaticArray &operator=(const StaticArray&);