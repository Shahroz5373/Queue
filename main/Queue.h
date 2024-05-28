#pragma once
class Queue
{
private:

	int front;
	int rear;
	int size;
	int* arr;

public:

	Queue();
	Queue(const int&);

	bool isEmpty()const; 
	bool isFull()const;
	bool enqueue(const int&); // push as stack
	int dequeue(); // pop as stack

	void printQueue()const;

	int peek()const; // get tos of stack
};

