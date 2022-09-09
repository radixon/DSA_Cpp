#include "Array_on_Stack.h"
#include <iostream>
#include <memory>





//----------------------------------------------------------------------//
//              OVERLOADED []OPERATOR                                   //
//----------------------------------------------------------------------//
template<typename T, size_t T_Size>
T& StackArray<T, T_Size>::operator[](size_t index)
{
    return this->array_[index];
}

template<typename T, size_t T_Size>
const T& StackArray<T, T_Size>::operator[](size_t index) const
{
    return this->array_[index];
}

//----------------------------------------------------------------------//
//      len()    return the size of the array                           //
//----------------------------------------------------------------------//
template<typename T, size_t T_Size>
constexpr size_t StackArray<T, T_Size>::len() const
{
    return T_Size;
}

//----------------------------------------------------------------------//
//      iter_seq()  return stored items one-by-one in sequence order    //
//----------------------------------------------------------------------//
template<typename T, size_t T_Size>
void StackArray<T, T_Size>::iter_seq()
{
    for(int i = 0; i < T_Size; i++)
    {
        std::cout << "index " << i << ": " << this->array_[i] << std::endl;
    }
}


//----------------------------------------------------------------------//
//      set_at(index,element) replace the ith index with new element    //
//----------------------------------------------------------------------//
template<typename T, size_t T_Size>
void StackArray<T, T_Size>::set_at(size_t index, const int &element)
{
    
    if(index >= T_Size)
    {
        std::cout << "Capacity Reached!" << '\n';
        return;
    }
    this->array_[index] = element;
}




