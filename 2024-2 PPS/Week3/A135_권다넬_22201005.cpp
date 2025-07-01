#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<string> books(N);
    
    for (int i = 0; i < N; i++)
    {
        cin >> books[i];
    }
    
    // 책 제목을 사전순으로 정렬
    sort(books.begin(), books.end());
    
    string bestSeller = books[0];
    int maxCount = 1
    int currentCount = 1;
    
    for (int i = 1; i < N; i++) 
    {
        if (books[i] == books[i - 1]) 
        {
            currentCount++;
        } 
        else 
        {
            currentCount = 1;
        }
        
        if (currentCount > maxCount) 
        {
            maxCount = currentCount;
            bestSeller = books[i];
        }
    }
    
    cout << bestSeller << endl;
    
    return 0;
}
