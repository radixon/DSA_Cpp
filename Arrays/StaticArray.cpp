#include "StaticArray.h"
#include <iostream>
#include <new>


// CONSTRUCTORS    
StaticArray::StaticArray(size_t capacity)
{
    this->size_ = 0;
    this->capacity_ = capacity;
    std::cout << "Constructor capacity Called" << std::endl;
    // Allocate memory on the heap
    this->array_ = new int[this->capacity_];
}

// Destructor
StaticArray::~StaticArray()
{
    std::cout << "Destructor Called" << std::endl;
    delete [] this->array_;
    this->array_ = nullptr;
}

// Copy Constructor
StaticArray::StaticArray(const StaticArray& rval)
{
    this->size_ = rval.size_;
    this->capacity_ = rval.size_;
    std::cout << "Copy Constructor Called" << std::endl;
    this->array_ = new int[this->capacity_];
    for(int i = 0; i < this->size_; i++)
    {
        array_[i] = rval.array_[i];
    }
    
}

// Overloaded Assignment
StaticArray& StaticArray::operator=(const StaticArray& value)
{
    std::cout << "Overloaded Assignment Called" << std::endl;
    if(this == &value)
        return *this;

    this->size_ = value.size_;
    this->capacity_ = value.capacity_;
    this->array_ = new int[value.capacity_];
    for(int i = 0; i < size_; i++)
    {
        array_[i] = value.array_[i];
    }

    return *this;    
}

//----------------------------------------------------------------------//
//      len()    return the size of the array                           //
//----------------------------------------------------------------------//

size_t StaticArray::len()
{
    return this->size_;
}

//----------------------------------------------------------------------//
//      iter_seq()  return stored items one-by-one in sequence order    //
//----------------------------------------------------------------------//
void StaticArray::iter_seq()
{
    for(int i = 0; i < this->size_; i++)
    {
        std::cout << "index " << i << ": " << array_[i] << std::endl;
    }
}

//----------------------------------------------------------------------//
//      get_at(index)    return the ith item                            //
//----------------------------------------------------------------------//

int& StaticArray::get_at(size_t index)
{
    return array_[index];
}


//----------------------------------------------------------------------//
//      set_at(index)    replace the ith item with new element          //
//----------------------------------------------------------------------//

int& StaticArray::set_at(int index, int element)
{
    array_[index] = element;
    return array_[index];
}

// Overloaded ostream Operator

std::ostream& StaticArray::operator<<(std::ostream& onscreen, const StaticArray& data)
{
    for(int i = 0; i < data.size_; i++)
    {
        onscreen << data.array_[i];
    }

    return onscreen;
}

// Overloaded istream Operator

std::istream& StaticArray::operator>>(std::istream& keyboard,const StaticArray& data)
{
    for(int i = 0; i < data.size_; i++)
    {
        keyboard >> data.array_[i];
    }

    return keyboard;
}