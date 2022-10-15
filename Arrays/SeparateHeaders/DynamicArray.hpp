#include <iostream>


//----------------------------------------------------------------------//
//      Overload ostream Operator                                       //
//----------------------------------------------------------------------//
std::ostream& operator<<(std::ostream& onscreen, const DynamicArray& data)
{
    for(int i = 0; i < data.size_; i++)
    {
        onscreen << data.array_[i];
    }

    return onscreen;
}

//----------------------------------------------------------------------//
//              CONSTRUCTOR                                             //
//----------------------------------------------------------------------//   
DynamicArray::DynamicArray(size_t cap) : capacity_{cap}
{
    std::cout << "Constructor capacity: " << capacity_ << '\n';
    this->size_ = 0;
    // Allocate Memory on the Heap
    this->array_ = new int[this->capacity_];
}

//----------------------------------------------------------------------//
//              DESTRUCTOR                                              //
//----------------------------------------------------------------------// 
DynamicArray::~DynamicArray()
{
    std::cout << "Destructor Called" << '\n';
    delete[] this->array_;
    this->array_ = nullptr;
}

//----------------------------------------------------------------------//
//              COPY CONSTRUCTOR                                        //
//----------------------------------------------------------------------// 
DynamicArray::DynamicArray(const DynamicArray &rval)
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
//              OVERLOADED ASSIGNMENT  OPERATOR                         //
//----------------------------------------------------------------------// 
DynamicArray& DynamicArray::operator=(const DynamicArray& value)
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

size_t DynamicArray::len() const
{
    return this->size_;
}

//----------------------------------------------------------------------//
//      iter_seq()  return stored items one-by-one in sequence order    //
//----------------------------------------------------------------------//
void DynamicArray::iter_seq()
{
    for(int i = 0; i < this->size_; i++)
    {
        std::cout << "index " << i << ": " << array_[i] << std::endl;
    }
}

//----------------------------------------------------------------------//
//      get_at(index)    return the ith item                            //
//----------------------------------------------------------------------//

int& DynamicArray::get_at(size_t index)
{
    if(index >= this->size_)
        throw"Invalid Index!";

    return this->array_[index];
}

//----------------------------------------------------------------------//
//      set_at(index,element) replace the ith index with new element    //
//----------------------------------------------------------------------//

void DynamicArray::set_at(size_t index, const int &element)
{
    if(index >= this->size_ && index < this->capacity_)
    {
        this->size_++;
    }
    if(index >= this->capacity_)
    {
        std::cout << "Capacity Reached!" << '\n';
        return;
    }
    this->array_[index] = element;
}

//----------------------------------------------------------------------//
//      insert_last(x)       add a value to the end of the array        //
//----------------------------------------------------------------------//
void DynamicArray::insert_last(int value)
{
    int *temp_array;
    if(this->size_ == this->capacity_)
    {
        if(this->capacity_ > 1)
            this->capacity_ *= 2;
        else if(this->capacity_ < 2)
            this->capacity_++;
        else
            this->capacity_ = 1;
        temp_array = new int[this->capacity_];
        for(int i = 0; i < this->size_; i++)
        {
            temp_array[i] = this->array_[i];
        }
        temp_array[this->size_] = value;
        this->size_++;
        delete [] array_;
        this->array_ = temp_array;
    }
    else
    {
        this->array_[this->size_] = value;
        this->size_++;
    }
}

//----------------------------------------------------------------------//
//      delete_last()       remove value to the end of the array        //
//----------------------------------------------------------------------//
void DynamicArray::delete_last()
{
    int *temp_array;

    temp_array = new int[this->capacity_];
    this->size_--;
    for(int i = 0; i < this->size_; i++)
    {
        temp_array[i] = this->array_[i];
    }

    delete [] array_;
    this->array_ = temp_array;
}

//----------------------------------------------------------------------//
//      insert_first(x)       add a value to the end of the array       //
//----------------------------------------------------------------------//
void DynamicArray::insert_first(int value)
{
    int *temp_array;
    if(this->size_ == this->capacity_)
    {
        if(this->capacity_ > 1)
            this->capacity_ *= 2;
        else if(this->capacity_ < 2)
            this->capacity_++;
        else
            this->capacity_ = 1;
        temp_array = new int[this->capacity_];
        for(int i = 0; i < this->size_; i++)
        {
            temp_array[i+1] = this->array_[i];
        }
        temp_array[0] = value;
        this->size_++;
        delete [] array_;
        this->array_ = temp_array;
    }
    else
    {
        temp_array = new int[this->capacity_];
        for(int i = 0; i < this->size_; i++)
        {
            temp_array[i+1] = this->array_[i];
        }
        temp_array[0] = value;
        this->size_++;
        delete [] array_;
        this->array_ = temp_array;
    }
}

//----------------------------------------------------------------------//
//      delete_first()        add a value to the end of the array       //
//----------------------------------------------------------------------//
void DynamicArray::delete_first()
{
    int *temp_array;
    
    temp_array = new int[this->capacity_];
    for(int i = 0; i < this->size_ - 1; i++)
    {
        temp_array[i] = this->array_[i+1];
    }
    this->size_--;
    delete [] array_;
    this->array_ = temp_array;
}

//----------------------------------------------------------------------//
//      insert_at(i,x)       add a value at location i of the array     //
//----------------------------------------------------------------------//
void DynamicArray::insert_at(size_t at_location, int value)
{
    int *temp_array;
    if(this->size_ == this->capacity_ || at_location > this->capacity_)
    {
        while(this->capacity_ < at_location || this->capacity_ <= this->size_)
        {
            if(this->capacity_ > 1)
                this->capacity_ *= 2;
            else if(this->capacity_ < 2)
                this->capacity_++;
            else
                this->capacity_ = 1;
        }
        
        temp_array = new int[this->capacity_];
        this->size_++;
        for(int i = 0; i < at_location; i++)
        {
            temp_array[i] = this->array_[i];
        }
        temp_array[at_location] = value;
        for(int i = at_location; i < this->size_; i++)
        {
            temp_array[i+1] = this->array_[i];
        }

        delete [] array_;
        this->array_ = temp_array;
    }
    else
    {
        temp_array = new int[this->capacity_];
        this->size_++;
        for(int i = 0; i < at_location; i++)
        {
            temp_array[i] = this->array_[i];
        }
        temp_array[at_location] = value;
        for(int i = at_location; i < this->size_; i++)
        {
            temp_array[i+1] = this->array_[i-1];
        }

        delete [] array_;
        this->array_ = temp_array;
    }
}

//----------------------------------------------------------------------//
//      delete_at(i)       remove location i of the array               //
//----------------------------------------------------------------------//
void DynamicArray::delete_at(size_t at_location)
{
    int *temp_array;
    
    temp_array = new int[this->capacity_];
    for(int i = 0; i < at_location; i++)
    {
        temp_array[i] = this->array_[i];
    }
    for(int i = at_location; i < this->size_; i++)
    {
        temp_array[i] = this->array_[i+1];
    }
    this->size_--;
    delete [] array_;
    this->array_ = temp_array;
}