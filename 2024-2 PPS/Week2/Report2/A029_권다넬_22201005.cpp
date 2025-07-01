#include <iostream>
using namespace std;

int main() {
    int N = 0;
    int first = 0;

    cin >> N;
    cin >> first;
    if(N > 5) //6은 2와 3 둘다 배수라서 풀 수 가 없다
    {
        cout << "Love is open door" << endl;
    }
    else {
        for(int i = 0 ; i < N-1 ; i++){
            if(first == 0) {
                cout << "1" << endl;
                first = 1;
            }
            else {
                cout << "0" << endl;
                first = 0;
            }
        } 
    }
    
    return 0;
}