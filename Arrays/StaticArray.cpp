#include "StaticArray.h"
#include <iostream>
#include <new>
#include <stdexcept>

//----------------------------------------------------------//
//                  CONSTRUCTORS                            //
//----------------------------------------------------------//
template <class T>
StaticArray<T>::StaticArray &operator[](const size_t explicit_capacity) : capacity_{explicit_capacity}, size_{ 1 }{
    // Allocate memory on the heap
    array_ = new T[capacity_];
}

template <class T>
StaticArray<T>::StaticArray(const T& data) : capacity_{explicit_capacity}, size_{ 1 }{
    // Allocate memory on the heap
    array_ = new T[capacity_];
}


// Destructor
StaticArray::~StaticArray(){
    delete [] array_;
    array_ = nullptr;
}

// Copy Constructor
template <class T>
StaticArray<T>::StaticArray(const StaticArray& implicit_initialization)
{
    size_ = implicit_initialization.size_;
    array_ = new T[value.size_];
    for(size_t i = 0; i < size_; i++)
    {
        array_[i] = implicit_initialization.array_[i];
    }
}

// Move Constructor
StaticArray::StaticArray(StaticArray &&argument) noexcept : arg(argument.arg);

// Overloaded Copy Assignment
T& StaticArray::StaticArray &operator=(const StaticArray& rval)
{
    std::cout << "Copy Assignment called" << "\n";

    std::swap(*this,rval);
    return *this;
}

// Swap Function
void swap(StaticArray& lhs, StaticArray& rhs)
{
    std::cout << "swap called" << "\n";
    std::swap(lhs.array_, rhs.array_);
}

// Overloaded lvalue [] Operator
T& StaticArray::operator[](int index)
{
    if(index < 0 || index >= capacity_)
    {
        std::throw out_of_range("Index value is out of range of the array memory");
        return array_[index];
    }
}

// Overloaded rvalue [] Operator
const T& StaticArray::operator[](int index) const
{
    if(index < 0 || index >= capacity_)
    {
        std::throw out_of_range("Index value is out of range of the array memory");
        return array_[index];
    }
}

// Overloaded ostream Operator
std::ostream& operator<<(std::ostream& onscreen, const StaticArray& data)
{
    for(int i = 0; i < data.size_; i++)
    {
        onscreen << data.array_[i];
    }
    return onscreen;
}

// Overloaded istream Operator
std::istream& operator>>(std::istream& keyboard, StaticArray& data)
{
    for(size_t i = 0; i < data.size_; i++)
    {
        keyboard >> data.array_[i];
    }
    return keyboard;
}

//----------------------------------------------------------//
//                  PUBLIC METHOD MEMBERS                   //
//----------------------------------------------------------//
size_t size() const;


size_t capacity() const;