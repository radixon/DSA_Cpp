#ifndef ARRAY_D_
#define ARRAY_D_

#include <iostream>
#include <memory>



class DynamicArray{

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
		friend std::ostream& operator<<(std::ostream& onscreen, const DynamicArray& data);

        // Overloaded istream Operator
		//friend std::istream& operator>>(std::istream& keyboard, DynamicArray& data);

    /****************************************************************
    * C++ Primer, Fifth Edition        Chapter 15                   *
    *                                                               *
    * Derived classes inherit the members of the base class.  When  *
    * a derived class require differing definitions for operators,  *
    * the derived class needs to override the definition inherited  *
    * from the base class.  In C++, this is accomplished by defining*
    * functions as virtual in the base class.
    *                                                               *
    * A derived class may access the public members of a base class,*
    * but may not access the private members.  Specifiy base class  *
    * members that allow access to derived classes, while           *
    * prohibiting access by other users after a protected access    *
    * specifier.
    * 
    * When the derivation is public, the public members of the base *
    * class becomes part of the inheritance of the derived class as *
    * welll.  In addition, an object of a publicly derived type can *
    * bind to a pointer or refernce to the base type.
    * 
    * The scope of a derived class is nested inside the scope of the*
    * base class.  As a result, there is no distinction between how *
    * a member of the derived class uses members of the base class  *
    * and how members defined in the base class are used.           *
    ****************************************************************/
    public:
        // CONSTRUCTORS
        DynamicArray(size_t capacity = 10);

        // Destructor
        ~DynamicArray();

        // Copy Constructor
        DynamicArray(const DynamicArray &rval);

        // Overloaded Assignment
        DynamicArray& operator=(const DynamicArray& value);


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

        //----------------------------------------------------------------------//
        //      insert_last(x)       add a value to the end of the array        //
        //----------------------------------------------------------------------//
        void insert_last(int value);

        //----------------------------------------------------------------------//
        //      delete_last()       remove value at the end of the array        //
        //----------------------------------------------------------------------//
        void delete_last();

        //----------------------------------------------------------------------//
        //      insert_first(x)       add a value to the beginning of the array //
        //----------------------------------------------------------------------//
        void insert_first(int value);

        //----------------------------------------------------------------------//
        //      delete_first()       remove value at the beginning of the array //
        //----------------------------------------------------------------------//
        void delete_first();

        //----------------------------------------------------------------------//
        //      insert_at(i,x)       add a value at location i of the array     //
        //----------------------------------------------------------------------//
        void insert_at(size_t at_location, int value);

        //----------------------------------------------------------------------//
        //      delete_at(i)       remove location i of the array               //
        //----------------------------------------------------------------------//
        void delete_at(size_t at_location);

};




#endif