#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class node 
{
    public:
    string name;
    node *link;
    void  set_data(string s);
};

void   node::set_data(string s)
{
    name = s;
}

class list
{
    public:
    node *head;
    node *tail;
    list();
    void insert_q(node t);
    void delete_list(string n);
    void show_all_data();
};

list :: list()
{
    head = nullptr;
    tail = nullptr;
}

void list::insert_q(node t)
{
    node *p;
    p = new node;
    (*p) = t;
    p->link = nullptr;
    if (tail != nullptr)
    {
        tail->link = p;
    }
    tail = p;
    if (head == nullptr)
    {
        head = p;
    }
}

void list::delete_list(string n)
{
    node *target;
    node *prev;
    node *p;
    target = head;
    while (target != NULL) {
        if (target->name == n && target == head) {
            head = target->link;
            p = target;
        }
        if(target->name == n) {
            p = target;
            prev->link = target->link;
        }
        prev = target;
        target = target->link;
        delete p;
    }
}

void list::show_all_data()
{
        node *p;

        for (p = head; p != NULL; p = p->link)
                cout << p->name << endl;
}

int main()
{
    int N;
    cin >> N;
    list a;

    for (int i = 0; i < N; i++)
    {
        node tmp;
        string input, input2;
        cin >> input >> input2;
        tmp.set_data(input);
        if (input2 == "enter")
        {
            a.insert_q(tmp);
        }
        else if (input2 == "leave")
        {
            a.delete_list(input);
        }   
    }

    a.show_all_data();

    return 0;
}