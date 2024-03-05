#pragma once
#include  <stdexcept>
#include <iostream>
class Stack
{
	int* nums;
	int count;
	int capacity;
public:
	Stack(int s = 10);
	void push(int i);
	void pop();
	int peek();
	int size();
    int& operator[](int i);
    friend std::ostream& operator<<(std::ostream& out, const Stack &stk);
};
