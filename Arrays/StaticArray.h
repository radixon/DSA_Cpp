#pragma once

#include <iostream>

template <typename T>
class StaticArray{
    public:

       
        // Constructor
        StaticArray(size_t arr_size = 0) ;

        // Destructor
        ~StaticArray();

        // Copy Constructor
        StaticArray(const StaticArray& value);

        // Overloaded Copy Assignment
        StaticArray &operator=(const StaticArray&);

        // Copy List Initialization
        std::pair<const T*, std::size_t> copy_arr;

        

    private:
        size_t size_;
        int* array_;

};