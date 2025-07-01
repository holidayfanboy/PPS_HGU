#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) 
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
            int dx = x2 - x1;
    int dy = y2 - y1;
    int distance = dx * dx + dy * dy;
    int sumr = r1 + r2;
    int difr = abs(r1 - r2);

        if (distance == 0 && r1 == r2) 
        {
            cout << -1 << endl; // 동그라미 완전 일치
        } 
        else if (distance > sumr * sumr || distance < difr * difr) 
        {
            cout << 0 << endl; // 동그라미 안 만남
        } 
        else if (distance == sumr * sumr || distance == difr * difr) 
        {
            cout << 1 << endl; // 동그라미 1 접촉
        } 
        else 
        {
            cout << 2 << endl; // 동그라미 2 접촉
        }
    }
    return 0;
}
