#pragma once
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
};
