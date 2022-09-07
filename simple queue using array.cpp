
#include <iostream>
using namespace std;
#define SIZE 5 
int queue[SIZE];
int front = -1;
int rear = -1;
void enQueue(int value) {
    if (rear != SIZE - 1) {
        if (rear == -1 && front == -1) {
            rear++;
            front++;
            queue[rear] = value;
        }
        else {
            rear++;
            queue[rear] = value;
        }
        
    }
    else {
        cout << " queue is full ." << endl;
    }
}
void deQueue() {
    if (front != -1 && rear != -1 && front<=rear) {
        front++;
    }
    else {
        cout << "queue is empty " << endl;
    }
}
int peak() {
    if (front != -1 && rear != -1 && front <= rear) {
        return queue[front];
    }
    else {
        cout << "queue is empty " << endl;
        return -1;
    }
}
void dispaly() {
    if (front != -1 && rear != -1 && front <= rear) {
        for (int i = front; i <= rear; i++) {
            cout << queue[i];
            cout << endl;
       }
    }
    else {
        cout << "queue is empty \t" << endl;
    }

}

int main()
{
    enQueue(5);
    enQueue(10);
    enQueue(15);
    enQueue(20);
    deQueue();
    dispaly();
    cout << "the peak = " << peak() << endl;
 
    getchar();
}

