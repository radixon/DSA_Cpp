#ifndef ARRAY_A_
#define ARRAY_A_

#include <iostream>
#include <memory>



class StaticArray{
    protected:
        //----------------------------------------------------------------------//
        //                      DATA MEMBERS                                    //
        //----------------------------------------------------------------------//
        int *array_;
        std::size_t capacity_;
        std::size_t size_;
    public:
        // CONSTRUCTORS
        explicit StaticArray(std::size_t capacity = 10);

        // Destructor
        ~StaticArray();

        // Copy Constructor
        StaticArray(const StaticArray &rval);

        // Overloaded Assignment
        StaticArray& operator=(const StaticArray& value);

        // Overloaded ostream Operator
		friend std::ostream& operator<<(std::ostream& onscreen, const StaticArray& data);

        //----------------------------------------------------------------------//
        //      len()       return the number of stored items.                  //
        //----------------------------------------------------------------------//
        size_t len() const;

        //----------------------------------------------------------------------//
        //      iter_seq()  return stored items one-by-one in sequence order    //
        //----------------------------------------------------------------------//
        void iter_seq();

        //----------------------------------------------------------------------//
        //      get_at(index)    return the ith item                            //
        //----------------------------------------------------------------------//
        int& get_at(std::size_t index);
        
        //----------------------------------------------------------------------//
        //      set_at(index)    replace the ith item with new element          //
        //----------------------------------------------------------------------//
        void set_at(std::size_t index, const int &element);

};

class DynamicArray : public StaticArray{
    public:
        // CONSTRUCTORS
        using StaticArray::StaticArray;

        //----------------------------------------------------------------------//
        //      insert_first(x)       add a value to the beginning of the array //
        //----------------------------------------------------------------------//
        void insert_first(int value);

        //----------------------------------------------------------------------//
        //      delete_first()       remove value at the beginning of the array //
        //----------------------------------------------------------------------//
        void delete_first();

        //----------------------------------------------------------------------//
        //      insert_last(x)       add a value to the end of the array        //
        //----------------------------------------------------------------------//
        void insert_last(int value);

        //----------------------------------------------------------------------//
        //      delete_last()       remove value at the end of the array        //
        //----------------------------------------------------------------------//
        void delete_last();

        //----------------------------------------------------------------------//
        //      insert_at(i,x)       add a value at location i of the array     //
        //----------------------------------------------------------------------//
        void insert_at(std::size_t at_location, int value);

        //----------------------------------------------------------------------//
        //      delete_at(i)       remove location i of the array               //
        //----------------------------------------------------------------------//
        void delete_at(std::size_t at_location);
};

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

#include "Array_.hpp"
#endif