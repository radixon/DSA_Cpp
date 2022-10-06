#ifndef ARRAY_S_
#define ARRAY_S_

#include <iostream>
#include <memory>

template<typename T, std::size_t T_Size>
class StackArray{
    protected:
        //----------------------------------------------------------------------//
        //                      DATA MEMBERS                                    //
        //----------------------------------------------------------------------//
        T array_[T_Size];

    public:
        // Overloaded [] operator
        T& operator[](std::size_t index) { return array_[index]; }
        const T& operator[](std::size_t index) const { return array_[index]; }


        //----------------------------------------------------------------------//
        //      len()       return the number of stored items.                  //
        //----------------------------------------------------------------------//
        constexpr std::size_t len() const { return T_Size; }

        //----------------------------------------------------------------------//
        //      iter_seq()  return stored items one-by-one in sequence order    //
        //----------------------------------------------------------------------//
        void iter_seq()
        {
            for(int i = 0; i < T_Size; i++)
            {
                std::cout << "index " << i << ": " << this->array_[i] << std::endl;
            }
        }

};

#endif