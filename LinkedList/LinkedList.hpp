//----------------------------------------------------------------------//
//              ListNode CONSTRUCTOR                                    //
//----------------------------------------------------------------------//
template <typename T>
ListNode<T>::ListNode(const T& data) : data(data), next(nullptr) { }

//----------------------------------------------------------------------//
//              List CONSTRUCTOR                                        //
//----------------------------------------------------------------------//
template <typename T>
List<T>::List() : head_(nullptr) { }

//----------------------------------------------------------------------//
//              DESTRUCTOR                                              //
//----------------------------------------------------------------------//
template <typename T>
List<T>::~List()
{
    ListNode *traverse = head_;
    while (traverse != nullptr) 
    {
        ListNode* toDelete = traverse;
        traverse = traverse->next;
        delete toDelete;
        toDelete = nullptr;
    }
}

//----------------------------------------------------------------------//
//              OVERLOADED [] Operator                                  //
//----------------------------------------------------------------------// 
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
template <typename T>
void List<T>::insert_first(const T& value)
{
  // Create a new ListNode on the heap
  ListNode *node = new ListNode(value);

  // Set the new node's next pointer to the current head of the List
  node->next = head_;

  // Set the List's head pointer to the new node
  head_ = node;
}


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
T insert_at(std::size_t idx, T value);


//----------------------------------------------------------------------//
//      delete_at(idx, value)  set value x indexed at location idx      //
//----------------------------------------------------------------------//
void delete_at(std::size_t idx);