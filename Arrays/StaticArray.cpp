#include "StaticArray.h"
#include <new>

//----------------------------------------------------------//
//                  CONSTRUCTORS                            //
//----------------------------------------------------------//
template <typename T>
T StaticArray::StaticArray &operator[](const size_t explicit_capacity) : capacity_{explicit_capacity}, size_{ 1 }{
    // Allocate memory on the heap
    array_ = new T[capacity_];
}

template <typename T>
T StaticArray::StaticArray(const T& data) : capacity_{explicit_capacity}, size_{ 1 }{
    // Allocate memory on the heap
    array_ = new T[capacity_];
}


// Destructor
StaticArray::~StaticArray(){
    delete [] array_;
    array_ = nullptr;
}

// Copy Constructor
template <typename T>
StaticArray::StaticArray(const StaticArray& value){
    size_ = value.size_;
    array_ = new T[value.size_]
}

// Move Constructor
StaticArray::StaticArray(StaticArray &&argument) noexcept : arg(argument.arg);

// Overloaded Copy Assignment
StaticArray::StaticArray &operator=(const StaticArray&);