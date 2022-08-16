#include "StaticArray.h"
#include <new>

// Constructor
template <typename T>
StaticArray::StaticArray(const int& arr_size = 0) : size(arr_size > 0 ? arr_size : throw invalid_argument("Array size must be greater than 0!")), array_(new T[size])
{
    for(int i = 0; i < size_; i++){
        array_[i] = nullptr;
    }
}


// Destructor
StaticArray::~StaticArray()
{
    delete [] array_;
}

// Copy Constructor
template <typename T>
StaticArray::StaticArray(const StaticArray& value)
{
    size_ = value.size_;
    array_ = new T[value.size_]
}

// Move Constructor
StaticArray(StaticArray &&rhs) noexcept : 
{

}

// Overloaded Copy Assignment
StaticArray &operator=(const StaticArray&);

// Get the size of the array
size_t getSize() const
{
    return size_;
}