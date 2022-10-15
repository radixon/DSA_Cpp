#pragma once

template <typename T>
class ListNode
{
    public:
        ListNode(const T& data);
        
        //----------------------------------------------------------------------//
        //      Contains the data in the element                                //
        //----------------------------------------------------------------------//
        const T& data;

        //----------------------------------------------------------------------//
        //      Contains the address of the next element of the list            //
        //----------------------------------------------------------------------//
        ListNode *next;
        
};

template <typename T>
class List
{
    protected:
        ListNode<T> *head_;
        ListNode<T>* find_(const T& data);
    public:
        // Constructor
        List();

        // Destructor
        ~List();

        // Overloaded [] Operator
        const T& operator[](std::size_t index);
        
        //----------------------------------------------------------------------//
        //      get_at(idx)  return value indexed at location idx               //
        //----------------------------------------------------------------------//
        T get_at(std::size_t idx);

        //----------------------------------------------------------------------//
        //      set_at(idx, value)  set value x indexed at location idx         //
        //----------------------------------------------------------------------//
        void set_at(std::size_t idx, T value);

        //----------------------------------------------------------------------//
        //      insert_first(value)  insert value at the beginning of the list  //
        //----------------------------------------------------------------------//
        void insert_first(T value);

        //----------------------------------------------------------------------//
        //      delete_first()  delete the value at the beginning of the list   //
        //----------------------------------------------------------------------//
        void delete_first();

        //----------------------------------------------------------------------//
        //      insert_last(value)  insert value at the end of the list         //
        //----------------------------------------------------------------------//
        void insert_last(T value);

        //----------------------------------------------------------------------//
        //      delete_first()  delete the value at the end of the list         //
        //----------------------------------------------------------------------//
        void delete_last();

        //----------------------------------------------------------------------//
        //      insert_at(idx,value)  insert value indexed at location idx      //
        //----------------------------------------------------------------------//
        T insert_at(std::size_t idx, T value));

        //----------------------------------------------------------------------//
        //      delete_at(idx, value)  set value x indexed at location idx      //
        //----------------------------------------------------------------------//
        void delete_at(std::size_t idx;
        
};

#include "LinkedList.hpp"