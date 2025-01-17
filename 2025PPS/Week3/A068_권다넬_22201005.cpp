#include <iostream>
#include <string>
using namespace std;
#define SIZE 2000000

class my_queue {
    int queue[SIZE];
    int front, rear;

public:
    my_queue();
    void push(int x);
    int pop();
    bool is_empty();
    int size();
    int get_front();
    int get_back();
};

my_queue::my_queue() {
    front = 0;
    rear = 0;
}

void my_queue::push(int x) {
    queue[rear] = x;
    rear = (rear + 1) % SIZE;
}

int my_queue::pop() {
    if (is_empty()) {
        return -1;
    } else {
        int value = queue[front];
        front = (front + 1) % SIZE;
        return value;
    }
}

bool my_queue::is_empty() {
    return front == rear;
}

int my_queue::size() {
    return (rear - front + SIZE) % SIZE;
}

int my_queue::get_front() {
    if (is_empty()) {
        return -1;
    } else {
        return queue[front];
    }
}

int my_queue::get_back() {
    if (is_empty()) {
        return -1;
    } else {
        return queue[(rear - 1 + SIZE) % SIZE];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    my_queue q;
    string output;

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;
            q.push(x);
        } else if (command == "pop") {
            output += to_string(q.pop()) + "\n";
        } else if (command == "size") {
            output += to_string(q.size()) + "\n";
        } else if (command == "empty") {
            output += to_string(q.is_empty() ? 1 : 0) + "\n";
        } else if (command == "front") {
            output += to_string(q.get_front()) + "\n";
        } else if (command == "back") {
            output += to_string(q.get_back()) + "\n";
        }
    }

    cout << output;

    return 0;
}
