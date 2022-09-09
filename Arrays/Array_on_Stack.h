#ifndef ARRAY_S_
#define ARRAY_S_

#include <iostream>
#include <memory>

template<typename T, size_t T_Size>
class StackArray{
    protected:
        //----------------------------------------------------------------------//
        //                      DATA MEMBERS                                    //
        //----------------------------------------------------------------------//
        T array_[T_Size];

    public:
        // Overloaded Assignment
        StackArray& operator=(const StackArray& value);

        // Overloaded [] operator
        T& operator[](size_t index);
        const T& operator[](size_t index) const;


        //----------------------------------------------------------------------//
        //      len()       return the number of stored items.                  //
        //----------------------------------------------------------------------//
        constexpr size_t len() const;

        //----------------------------------------------------------------------//
        //      iter_seq()  return stored items one-by-one in sequence order    //
        //----------------------------------------------------------------------//
        void iter_seq();
        
        //----------------------------------------------------------------------//
        //      set_at(index)    replace the ith item with new element          //
        //----------------------------------------------------------------------//
        void set_at(size_t index, const int &element);

};

#endif