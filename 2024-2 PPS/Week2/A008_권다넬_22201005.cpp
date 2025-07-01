#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 100

class Student {
    vector<float> grade;
    friend void getlist(Student& a, int num);
    friend void getaverage(Student& a);
    friend void aboveaverage(Student& a, float avg);
    void putscore (float score);
};

int main()
{
    int C = 0;
    cin >> C;
    Student b[MAX];
    
    for (int i = 0; i < C; i++)
    {
        int N = 0;
        cin >> N;
        getlist(b[i], N);
    }

    for (int i = 0; i < C; i++)
    {
        getaverage(b[i]);
    }
    return 0;
}

void getaverage(Student& a) 
{
    float sum = 0;
    for (int i = 0; i < a.grade.size(); i++)
    {
        sum += a.grade[i];
    }

    float average = sum / a.grade.size();
    aboveaverage(a, average);
}

void aboveaverage(Student& a, float avg)
{
    float sum = 0;
    float count = 0;
    for (int i = 0; i < a.grade.size(); i++)
    {
        if (a.grade[i] > avg)
        {
            count++;
        }
    }
    sum = count/a.grade.size();
    sum = sum * 100;
    cout << fixed << setprecision(3) << sum << "%" << endl;
}

void getlist (Student& a, int num)
{
    for (int i = 0; i < num; i++)
    {
        float score = 0;
        cin >> score;
        a.putscore(score);
    }
}

void Student :: putscore(float score)
{
    grade.push_back(score);
}