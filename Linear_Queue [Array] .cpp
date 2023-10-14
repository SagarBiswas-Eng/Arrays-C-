#include<iostream>
using namespace std;

int const maxSize = 100;

template <typename Dtype>
class linear_Queue {
    int head, curr;
    Dtype arr[maxSize];

public:
    linear_Queue() {
        head = -1;
        curr = -1;
    }
    void enQueue(Dtype value) {
        if(head == maxSize - 1) {
            cout << "Queue OverFLow." << endl;
        } else {
            if(head == -1) {
                head = 0;
                curr++;
                arr[curr] = value;
            } else {
                curr++;
                arr[curr] = value;
            }
        }
    }

    void deQueue() {
        if(head == -1) {
            cout << "Queue UnderFlow." << endl;
        } else {
            if(head == curr) { // if there is only one element.
                head = curr = -1;
            } else {
                head ++;
            }
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
            cout << "The queue is empty." << endl;
        } else {
            cout << "\t\t..:: list: ";
            for(int i = head; i <= curr; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};



int main() {
    linear_Queue <int> myQueueList;
    myQueueList.enQueue(10);
    myQueueList.enQueue(20);
    myQueueList.enQueue(30);
    myQueueList.enQueue(40);
    myQueueList.deQueue();

    cout << "Top of the queue is\t: " << myQueueList.top() << endl << "\n";
    myQueueList.display();

    return 0;
}
