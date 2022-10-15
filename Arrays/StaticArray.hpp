#include <iostream>


//----------------------------------------------------------------------//
//              CONSTRUCTOR                                             //
//----------------------------------------------------------------------//   
StaticArray::StaticArray(size_t cap) : capacity_{cap}
{
    std::cout << "Constructor capacity: " << capacity_ << '\n';
    this->size_ = 0;
    // Allocate Memory on the Heap
    this->array_ = new int[this->capacity_];
}

//----------------------------------------------------------------------//
//              DESTRUCTOR                                              //
//----------------------------------------------------------------------// 
StaticArray::~StaticArray()
{
    std::cout << "Destructor Called" << '\n';
    delete[] this->array_;
    this->array_ = nullptr;
}

//----------------------------------------------------------------------//
//              COPY CONSTRUCTOR                                        //
//----------------------------------------------------------------------// 
StaticArray::StaticArray(const StaticArray &rval)
{
    std::cout << "Copy Constructor Called" << '\n';
    this->size_ = rval.size_;
    this->capacity_ = rval.capacity_;
    this->array_ = new int[this->capacity_];
    for(int i = 0; i < this->size_; i++)
    {
        this->array_[i] = rval.array_[i];
    }

    std::copy(rval.array_, rval.array_ + size_, this->array_);
    
}

//----------------------------------------------------------------------//
//              OVERLOADED ASSIGNMENT                                   //
//----------------------------------------------------------------------// 
StaticArray& StaticArray::operator=(const StaticArray& value)
{
    std::cout << "Overloaded Assignment Called" << '\n';
    if(this == &value)
        return *this;

    this->size_ = value.size_;
    this->capacity_ = value.capacity_;
    this->array_ = new int[this->capacity_];
    for(int i = 0; i < this->size_; i++)
    {
        this->array_[i] = value.array_[i];
    }

    return *this;    
}

//----------------------------------------------------------------------//
//      len()    return the size of the array                           //
//----------------------------------------------------------------------//

size_t StaticArray::len() const
{
    return this->size_;
}

//----------------------------------------------------------------------//
//      iter_seq()  return stored items one-by-one in sequence order    //
//----------------------------------------------------------------------//
void StaticArray::iter_seq()
{
    for(int i = 0; i < this->size_; i++)
    {
        std::cout << "index " << i << ": " << array_[i] << std::endl;
    }
}

//----------------------------------------------------------------------//
//      get_at(index)    return the ith item                            //
//----------------------------------------------------------------------//

int& StaticArray::get_at(size_t index)
{
    if(index >= this->size_)
        throw"Invalid Index!";

    return this->array_[index];
}


//----------------------------------------------------------------------//
//      set_at(index,element) replace the ith index with new element    //
//----------------------------------------------------------------------//

void StaticArray::set_at(size_t index, const int &element)
{
    if(index >= this->size_ && index < this->capacity_)
        this->size_++;
    if(index >= this->capacity_)
    {
        std::cout << "Capacity Reached!" << '\n';
        return;
    }
    this->array_[index] = element;
}


//----------------------------------------------------------------------//
//      Overload ostream Operator                                       //
//----------------------------------------------------------------------//
std::ostream& operator<<(std::ostream& onscreen, const StaticArray& data)
{
    for(int i = 0; i < data.size_; i++)
    {
        onscreen << data.array_[i];
    }

    return onscreen;
}

/*
//----------------------------------------------------------------------//
//      Overload istream Operator                                       //
//----------------------------------------------------------------------//
std::istream& operator>>(std::istream& keyboard,const sArray& data)
{
    for(int i = 0; i < data.size_; i++)
    {
        keyboard >> data.array_[i];
    }

    return keyboard;
}
*/