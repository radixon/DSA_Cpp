#pragma once

#include <iostream>

template <class T>
class StaticArray{

    /****************************************************************
    * C++ Primer, Fifth Edition        Chapter 13                   *
    *                                                               *
    * All five copy-control members hsould be thought of as a       *
    * unit: Ordinarily, if a class defines any of these             *
    * operations, it usually should define them all.  As we've      *
    * seen, some classes must define the copy constructor,          *
    * copy-assignment operator, and destructor to work correctly.   *
    * Such classes typically have a resource that the copy          *
    * members must copy.  Ordinarily, copying a resource entails    *
    * some amount of overhead.  Classes that define the move        *
    * constructor and move-assignment operator can avoid this       *
    * overhead in those circumstances where a copy isn't            *
    * necessary.                                                    *
    ****************************************************************/
    public:
        //----------------------------------------------------------//
        //                  CONSTRUCTORS                            //
        //----------------------------------------------------------//
        StaticArray &operator[](const size_t explicit_capacity);
        StaticArray(const T& data);

        // Destructor
        ~StaticArray();

        // Copy Constructor
        StaticArray(const StaticArray& implicit_initialization);

        // Move Constructor
        StaticArray(StaticArray &&argument) noexcept : arg(argument.arg);

        // Overloaded Copy Assignment
        StaticArray &operator=(const StaticArray&);

        // Overloaded lvalue [] Operator
        T &operator[](int index);

        // Overloaded rvalue [] Operator
        T operator[](int index);

        

        //----------------------------------------------------------//
        //                  PUBLIC METHOD MEMBERS                   //
        //----------------------------------------------------------//
        size_t size() const;
        size_t capacity() const;
        bool is_empty() const;
        T& get_at(size_t index) const;
        T& get_at(size_t index);


    private:
        //----------------------------------------------------------//
        //                  DATA MEMBERS                            //
        //----------------------------------------------------------//
        T* array_;
        size_t size_;
        size_t capacity_;

        // Swap Function
        friend void swap(StaticArray& lhs, StaticArray& rhs);

        // Overloaded ostream Operator
		friend std::ostream& operator<<(std::ostream& onscreen, const StaticArray& data);

        // Overloaded istream Operator
		friend std::istream& operator>>(std::istream& keyboard, StaticArray& data);

        
};