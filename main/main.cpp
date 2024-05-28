#include <iostream>
using namespace std;
#include"Queue.h"

int main()
{
    Queue queue;

    queue.enqueue(7);
    queue.enqueue(3);
    queue.enqueue(1);
    queue.enqueue(9);
    cout << "Before enqueue(pop) ";
    queue.printQueue();
    queue.dequeue();
    queue.dequeue();
    cout << "After enqueue(pop) ";
    queue.printQueue();
    return 0;
}

