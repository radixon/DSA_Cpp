#ifndef ARRAY_S_
#define ARRAY_S_

#include <iostream>

template<typename T, std::size_t T_Size>
class StackArray{
    protected:
        //----------------------------------------------------------------------//
        //                      DATA MEMBERS                                    //
        //----------------------------------------------------------------------//
        T array_[T_Size];

    public:
        // Overloaded [] operator
        T& operator[](std::size_t index);
        const T& operator[](std::size_t index) const; 


        //----------------------------------------------------------------------//
        //      len()       return the number of stored items.                  //
        //----------------------------------------------------------------------//
        constexpr std::size_t len() const; 

        //----------------------------------------------------------------------//
        //      iter_seq()  return stored items one-by-one in sequence order    //
        //----------------------------------------------------------------------//
        void iter_seq();

};

#include "Array_on_Stack.hpp"
#endif