#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class profile 
{
    int age;
    string name;
    int index; // 가입 순서를 기록

public:
    profile();
    void insert(int a, string b, int idx);
    void printpro();
    int getAge() const;
    int getIndex() const;
};

profile::profile() 
{
    age = 0;
    name = "";
    index = 0;
}

void profile::insert(int a, string b, int idx) 
{
    age = a;
    name = b;
    index = idx;
}

void profile::printpro() 
{
    cout << age << " " << name << endl;
}

int profile::getAge() const 
{
    return age;
}

int profile::getIndex() const 
{
    return index;
}

// 정렬 기준: 나이 오름차순, 나이가 같으면 가입 순서 오름차순
bool compare(const profile &a, const profile &b) 
{
    if (a.getAge() == b.getAge()) 
    {
        return a.getIndex() < b.getIndex();
    }
    return a.getAge() < b.getAge();
}

int main() {
    int N;
    cin >> N;

    vector<profile> list(N);

    for (int i = 0; i < N; i++) 
    {
        int ageinput;
        string nameinput;
        cin >> ageinput >> nameinput;
        list[i].insert(ageinput, nameinput, i); 
    }

    sort(list.begin(), list.end(), compare);

    for (int i = 0; i < N; i++)
    {
        list[i].printpro();
    }

    return 0;
}
