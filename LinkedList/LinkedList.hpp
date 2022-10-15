#include "LinkedList.h"


template <typename T>
ListNode<T>::ListNode(const T & data) : data(data), next(nullptr) { }

template <typename T>
List<T>::List(const T & data) : head_(nullptr) { }

template <typename T>
List<T>::~List()
{
    ListNode *traverse = head_;
    while (traverse != nullptr) 
    {
        ListNode* toDelete = thru;
        traverse = traverse->next;
        delete toDelete;
        toDelete = nullptr;
    }
}

template <typename T>
const T& List<T>::operator[](std::size_t idx) 
{
  // Start a `traverse` pointer to advance thru the list:
  ListNode *traverse = head_;

  // Loop until the end of the list (or until a `nullptr`):
  while (idx > 0 && traverse->next != nullptr) 
  {
    traverse = traverse->next;
    idx--;
  }  

  // Return the data:
  return traverse->data;
}

template <typename T>
typename List<T>::ListNode *List<T>::find_(const T& data) {
  ListNode *traverse = head_;
  while (traverse != nullptr) {
    if (traverse->data == data) { return traverse; }
    traverse = traverse->next;
  }

  return nullptr;  
}