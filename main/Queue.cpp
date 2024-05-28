#include<iostream>
using namespace std;
#include "Queue.h"



Queue::Queue(){
	size = 10; // default size is 10
	front = -1;
	rear = -1;
	arr = new int[size];
}


Queue::Queue(const int& _size) {
	size = _size;
	front = -1;
	rear = -1;
	arr = new int[size];
}

bool Queue::isEmpty()const {	
	return (front == -1 && rear == -1);
}
bool Queue::isFull()const { 
	return(front==0&&(rear==size-1));
}

bool Queue::enqueue(const int& element) {
	if (isFull()) {
		cout << "Queue is full" << endl;
		return false;
	}
	else {
		if (front == -1) front = 0;
		arr[++rear] = element;
		return true;
	}
}

int Queue::dequeue() {
	if (isEmpty()) {
		cout << "Queue is empty " << endl;
		return -1;
	}
	else {
		int temp = arr[front];
		if (front == rear) {
			front = -1;
			rear = -1;
		}
		else {
			front++;
		}
		return temp;
	}
}

void Queue::printQueue() const{
	cout << "Queue is: "  ;
	for (int i = front; i <= rear; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int Queue::peek()const{
	if (isEmpty())
		return -1;
	else
		return (arr[front]);
}