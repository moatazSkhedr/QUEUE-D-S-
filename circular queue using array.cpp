#include <iostream>
using namespace std;
#define SIZE 5 
int front = -1;
int rear = -1;
int queue[SIZE];

bool isEmpty() {
    if (front == -1 && rear == -1) {
        return true;
    }
    else {
        return false;
    }
}
bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
        return true;
    }
    else if (rear == front - 1) {
        return true;
        }
    else {
        return false;
    }
}
void enQueue(int value) {
    if (isFull()) {
        cout << "Queue is Full ." << endl;
    }
    else {
        if (isEmpty()) {
            front = rear = 0;
            queue[rear] = value;
        }
        else if (rear == SIZE - 1) {
            rear = 0;
            queue[rear] = value;
        }
        else {
            rear++;
            queue[rear];
        }
    }
}
void deQueu() {
    if (isEmpty()) {
        cout << "Queue is Empty ." << endl;
    }
    else {
        if (front == rear) {
            front = rear = -1;
        }
        else if (front == SIZE - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

}
int peak() {
    if (isEmpty()) {
        cout << "Queue IS Empty " << endl;
        return -1;
    }
    else {
        return  queue[front];
    }
}

void display() {
    if (isEmpty()) {
        cout << "the queue is empty " << endl;
    }
    else {
        if (front <= rear) {
            for (int i = front; i <= rear; i++) {
                cout << queue[front] <<endl;

            }
        }
        else {
            for (int i = front; i < SIZE; i++) {
                cout << queue[i] << endl;

            }
            for (int i = 0; i <= rear; i++) {
                cout << queue[i] << endl;
            }
        }
    }
}

int main()
{
    enQueue(5);
    enQueue(5);
    enQueue(5);
    enQueue(5);
    deQueu();
    display();

    getchar();
    
}
