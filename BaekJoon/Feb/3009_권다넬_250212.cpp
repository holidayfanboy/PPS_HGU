#include <iostream>
using namespace std;

int main()
{
    int A[4][1];
    int answerx = 0;
    int answery = 0;
    for (int i = 0; i < 3; i++)
    {
        int inputx, inputy = 0;
        cin >> inputx >> inputy;
        A[i][0] = inputx;
        A[i][1] = inputy;
    }
    //answerx 찾기
    if (A[0][0] == A[1][0])
    answerx = A[2][0];
    else if (A[0][0] == A[2][0])
    answerx = A[1][0];
    else 
    answerx = A[0][0];
    
    //answery 찾기
    if (A[0][1] == A[1][1])
    answery = A[2][1];
    else if (A[0][1] == A[2][1])
    answery = A[1][1];
    else 
    answery = A[0][1];
    
    cout << answerx << " " << answery << endl;
    
    return 0;
}