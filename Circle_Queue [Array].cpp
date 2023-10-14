#include<iostream>
using namespace std;

int const maxSize = 100;
template<typename Dtype>
class Circle_Queue {
private:
    int head, curr;
    Dtype arr[maxSize];

public:
    Circle_Queue() {
        head = -1;
        curr = -1;
    }

    void enQueue(Dtype value) {
        if(curr == maxSize - 1) {
            cout << "Queue OverFlow." << endl;
            return;
        } else {
            if(head == -1) {
                head = 0;
                curr = (curr + 1) % maxSize;
                arr[curr] = value;
            } else {
                curr = (curr + 1) % maxSize;
                arr[curr] = value;
            }
        }
    }

    void deQueue() {
        if(head == -1) {
            cout << "Queue is UnderFlow." << endl;
        } else if(head == curr) {
            head = curr = -1;
        } else {
            head = (head + 1) % maxSize;
        }
    }

    Dtype top() {
        if(head == -1) {
            return -1;
        } else {
            return arr[head];
        }
    }

    void display() {
        if(head == -1) {
            cout << "Queue is Empty." << endl;
        } else {
            int temp = head;
            cout << "   ..:: List\t\t: ";
            while(temp != curr) {
                cout << arr[temp] << " ";
                temp = (temp + 1) % maxSize;
            }
            cout << arr[curr] << endl;
        }
        cout << "\n";
    }
};

int main() {

    Circle_Queue <int> myQueueList;

    myQueueList.enQueue(10);
    myQueueList.enQueue(20);
    myQueueList.enQueue(30);
    myQueueList.enQueue(40);
    myQueueList.deQueue();

    cout << "Top of the queue is\t: " << myQueueList.top() << endl << "\n";
    myQueueList.display();

    return 00;
}
