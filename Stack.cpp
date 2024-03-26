#include "Stack.h"
Stack::Stack(int s)
{
    nums = new int[s];
    count = 0;
    capacity = s;
}
void Stack::push(int i)
{
    if (count == capacity)
    {
        int * temp = new int[capacity * 2];
        for (int i = 0; i < count; i++)
        {
            temp[i] = nums[i];
        }
        delete[]nums;
        nums = temp;
        capacity = capacity * 2;

    }
    nums[count] = i;
    count++;
}
void Stack::pop()
{
    nums[count-1] = 0;
    count--;
}
int Stack::peek()
{
    return nums[count - 1];
}
int Stack::size()
{
    return count;
}

int& Stack::operator[](int i)
{
    if(i >= 0 && i < capacity)
    {
        return nums[i];
    }
    throw std::logic_error("Array out of bounds");
}

std::ostream& operator<<(std::ostream& out, const Stack &stk)
{
    for(int i = 0; i < stk.count; i++)
    {
        if(i!=0)
            out << ", ";
        out << stk.nums[i];
    }
    out << "<- top of the stack"<<std::endl;
    return out;
}

Stack::Stack(Stack &other)
{
    count = other.count;
    capacity = other.capacity;
    nums = new int[capacity];
    for(int i =0; i < count;i++)
    {
        nums[i] = other.nums[i];
    }
}
Stack& Stack::operator=(Stack& other)
{
    if(&other == this) {
        return *this;
    }
    count = other.count;
    capacity = other.capacity;
    if(nums !=nullptr)
    {
        delete [] nums;
    }
    nums = new int[capacity];

    for(int i =0; i < count;i++)
    {
        nums[i] = other.nums[i];
    }
    return *this;
}
Stack::~Stack()
{
   delete[] nums;
}