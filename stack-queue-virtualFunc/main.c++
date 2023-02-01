#include <iostream>
using namespace std;

class List {
   protected:
    virtual void store(int val) = 0;
    virtual int retrieve() = 0;
};

class Stack : public List {
   public:
    int arr[10];
    int top;
    int size;
    Stack() {
        for (int i = 0; i < 10; i++) {
            arr[i] = -1;
        }
        top = -1;
        size = 0;
    }
    void store(int val) {
        arr[++top] = val;
        size++;
    }
    int retrieve() {
        return arr[top];
    }
    int pop() {
        size--;
        int val = arr[top];
        arr[top--] = -1;
        return val;
    }
    void printList() {
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

class Queue : public List {
   public:
    int arr[10];
    int front;
    int size;
    int rear;
    Queue() {
        front = -1;
        size = 0;
        rear = -1;
        for (int i = 0; i < 10; i++) {
            arr[i] = -1;
        }
    }
    void store(int val) {
        if (size == 0) {
            front = 0;
            rear = 0;
        }
        arr[rear] = val;
        rear++;
        size++;
    }
    int retrieve() {
        return arr[front];
    }
    int pop() {
        size--;
        int val = arr[front];
        arr[front++] = -1;
        return val;
    }
    void printList() {
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << ' ';
        }
        cout << "\n";
    }
};

int main() {
    Queue q = Queue();
    q.printList();
    q.store(50);
    q.store(43);
    q.store(23);
    q.store(13);
    q.printList();
    cout << q.pop() << " " << q.size << "\n";
    q.printList();
    cout << q.pop() << " " << q.size << "\n";
    q.printList();
    cout << q.pop() << " " << q.size << "\n";
    q.store(62);
    q.store(78);
    q.printList();
    cout << q.pop() << " " << q.size << "\n";
    q.printList();
    return 0;
}