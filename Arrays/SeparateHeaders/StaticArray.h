#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>


class StaticArray{

    /****************************************************************
    * C++ Primer, Fifth Edition        Chapter 13                   *
    *                                                               *
    * All five copy-control members should be thought of as a       *
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
    protected:
        //----------------------------------------------------------------------//
        //                      DATA MEMBERS                                    //
        //----------------------------------------------------------------------//
        int *array_;
        size_t capacity_;
        size_t size_;

        // Overloaded ostream Operator
		friend std::ostream& operator<<(std::ostream& onscreen, const StaticArray& data);

        // Overloaded istream Operator
		//friend std::istream& operator>>(std::istream& keyboard, StaticArray& data);

    public:
        // CONSTRUCTORS
        StaticArray(size_t capacity = 10);

        // Destructor
        ~StaticArray();

        // Copy Constructor
        StaticArray(const StaticArray &rval);

        // Overloaded Assignment
        StaticArray& operator=(const StaticArray& value);


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
        int& get_at(size_t index);
        
        //----------------------------------------------------------------------//
        //      set_at(index)    replace the ith item with new element          //
        //----------------------------------------------------------------------//
        void set_at(size_t index, const int &element);

};

#include "StaticArray.hpp"

#endif