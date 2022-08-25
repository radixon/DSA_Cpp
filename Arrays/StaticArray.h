#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>
#include <memory>


class sArray{

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
    protected:
        //----------------------------------------------------------------------//
        //                      DATA MEMBERS                                    //
        //----------------------------------------------------------------------//
        int *array_;
        unsigned int capacity_;
        unsigned int size_;

        // Overloaded ostream Operator
		friend std::ostream& operator<<(std::ostream& onscreen, const sArray& data);

        // Overloaded istream Operator
		//friend std::istream& operator>>(std::istream& keyboard, sArray& data);

    public:
        // CONSTRUCTORS
        sArray(unsigned int capacity = 10);

        // Destructor
        ~sArray();

        // Copy Constructor
        sArray(const sArray& rval);

        // Overloaded Assignment
        sArray& operator=(const sArray& value);


        //----------------------------------------------------------------------//
        //      len()       return the number of stored items.                  //
        //----------------------------------------------------------------------//
        unsigned int len() const;

        //----------------------------------------------------------------------//
        //      iter_seq()  return stored items one-by-one in sequence order    //
        //----------------------------------------------------------------------//
        void iter_seq();

        //----------------------------------------------------------------------//
        //      get_at(index)    return the ith item                            //
        //----------------------------------------------------------------------//
        int& get_at(unsigned int index);
        
        //----------------------------------------------------------------------//
        //      set_at(index)    replace the ith item with new element          //
        //----------------------------------------------------------------------//
        void set_at(int index, const int &element);

};

#endif