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