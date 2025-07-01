#include <iostream>
using namespace std;

class node{
    public:
    int cnum;
    node *link;
    node *prev; 
    void set_data(int a);
};

void node::set_data(int a)
{
    cnum = a;
}

class deck 
{
    node *head;
    node *tail;
    public:
    int count;
    deck();
    void frontadd(int a);
    void backadd(int a);
    void deletefront();
    void deleteback();
    void countlist();
    void deckempty();
    void printhead();
    void printtail();
};

deck :: deck()
{
    count = 0;
    head = nullptr;
    tail = nullptr;
}

void deck:: deckempty()
{
    if (head == nullptr && tail == nullptr)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
}

void deck:: countlist()
{
    cout << count << '\n';
}

void deck::deletefront()
{
    if (head == nullptr)
    {
        cout << -1 << '\n';
        return;
    }

    count--;
    node *temp = head;
    cout << temp->cnum << '\n';
    head = head->link;
    if (head != nullptr)
        head->prev = nullptr;
    else
        tail = nullptr; 
    delete temp;
}

void deck::printhead()
{
    if (head == nullptr)
    {
        cout << -1 << '\n';
        return;
    }
    cout << head->cnum << '\n';
}

void deck::printtail()
{
    if (tail == nullptr)
    {
        cout << -1 << '\n';
        return;
    }
    cout << tail->cnum << '\n';
}

void deck::deleteback()
{
    if (tail == nullptr)
    {
        cout << -1 << '\n';
        return;
    }

    count--;
    node *tmp = tail;
    cout << tmp->cnum << '\n';
    tail = tmp->prev;

    if (tail != nullptr)
    {
        tail->link = nullptr;
    }
    else
        head = nullptr; 

    delete tmp;
}


void deck::frontadd(int val)
{
    node *p = new node;
    p->set_data(val);
    p->link = nullptr;
    p->prev = nullptr;

    if (head == nullptr)
    {
        head = tail = p;
    }
    else
    {
        p->link = head;
        head->prev = p;
        head = p;
    }
    count++;

    return;
}

void deck::backadd(int val)
{
    node *p = new node;
    p->set_data(val);
    p->link = nullptr;
    p->prev = nullptr;

    if (tail == nullptr)
    {
        head = tail = p;
    }
    else
    {
        p->prev = tail;
        tail->link = p;
        tail = p;
    }
    count++;

    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 0;
    cin >> N;
    deck decks;
    while (N--)
    {
        int input = 0;
        cin >> input;
        if (input == 1)
        {
            int num = 0;
            cin >> num;
            decks.frontadd(num);
        } 
        else if (input == 2)
        {
            int num = 0;
            cin >> num;
            decks.backadd(num);
        }
        else if (input == 3)
        {
            decks.deletefront();
        }
        else if (input == 4)
        {
            decks.deleteback();   
        }
        else if (input == 5)
        {
            decks.countlist();
        }
        else if (input == 6)
        {
            decks.deckempty();   
        }
        else if (input == 7)
        {
            decks.printhead();
        }
        else if (input == 8)
        {
            decks.printtail();
        }
    }
    return 0;
}