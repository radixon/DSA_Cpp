#pragma once

#include <iostream>

template <typename T>
class StaticArray{
    public:
        // Constructor
        StaticArray(const int& arr_size = 0);

        // Destructor
        ~StaticArray();

        // Copy Constructor
        StaticArray(const StaticArray& value);

        // Move Constructor
        StaticArray(StaticArray &&) noexcept;

        // Overloaded Copy Assignment
        StaticArray &operator=(const StaticArray&);

        /***************************************************************
         * C++ Primer, Fifth Edition        Chapter 13                 *
         * All five copy-control members hsould be thought of as a     *
         * unit: Ordinarily, if a class defines any of these           *
         * operations, it usually should define them all.  As we've    *
         * seen, some classes must define the copy constructor,        *
         * copy-assignment operator, and destructor to work correctly. *
         * Such classes typically have a resource that the copy        *
         * members must copy.  Ordinarily, copying a resource entails  *
         * some amount of overhead.  Classes that define the move      *
         * constructor and move-assignment operator can avoid this     *
         * overhead in those circumstances where a copy isn't          *
         * necessary.                                                  *
         **************************************************************/

        // Return the size of the array
        size_t getSize() const;


    private:
        T* array_;
        size_t size_;


        
};