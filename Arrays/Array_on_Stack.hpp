#include "Array_on_Stack.h"


template<typename T, std::size_t T_Size>
const T& StackArray<T, T_Size>::operator[](std::size_t index) const
{ 
    return this->array_[index]; 
}

template<typename T, std::size_t T_Size>
T& StackArray<T, T_Size>::operator[](std::size_t index) 
{ 
    return this->array_[index]; 
}

template<typename T, std::size_t T_Size>
constexpr std::size_t StackArray<T,T_Size>::len() const 
{ 
    return T_Size; 
}

template<typename T, std::size_t T_Size>
void StackArray<T,T_Size>::iter_seq()
{
    for(int i = 0; i < T_Size; i++)
    {
        std::cout << "index " << i << ": " << this->array_[i] << std::endl;
    }
}