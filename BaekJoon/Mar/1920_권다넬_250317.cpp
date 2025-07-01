// #include <iostream>

// using namespace std;

// int checknum(int a, int b[], int M)
// {
//     int low = 0;
//     int high = M;
//     int mid = low + (high-low)/2;
//     while (true)
//     {
//         if (b[mid] == a)
//         {
//             return 1;
//         }
//         else if (b[mid] < a)
//         {
//             low = mid + 1;
//             mid = low + (high-low)/2;
//         }
//         else if (b[mid] > a)
//         {
//             high = mid - 1; 
//             mid = low + (high-low)/2;
//         }
//         if (low > high)
//         {
//             break;
//         }
//     }
//     return 0;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int M, N;
//     cin >> M;
//     int Mlist[100000];
//     int Nlist[100000];
    
//     for (int i = 0; i < M; i++)
//     {
//         int input = 0;
//         cin >> input;
//         Mlist[i] = input;
//     }

//     for (int i = 0; i < M; i++)
//     {
//         int min = 2147483647;
//         int area = 0;
//         for (int k = i; k < M; k++)
//         {
//             if( Mlist[k] < min)
//             {
//                 area = k;
//                 min = Mlist[k];
//             }
//         }
//         int temp = Mlist[i];
//         Mlist[i] = Mlist[area];
//         Mlist[area] = temp;
//     }

//     cin >> N;

//     for (int i = 0; i < N; i++)
//     {
//         int input = 0;
//         cin >> input;
//         int a =checknum(input, Mlist, M);
//         cout << a << '\n';
//     }

//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int checknum(long long a, long long b[], int M)
{
    int low = 0;
    int high = M-1;
    int mid = low + (high-low)/2;
    while (true)
    {
        if (b[mid] == a)
        {
            return 1;
        }
        else if (b[mid] < a)
        {
            low = mid + 1;
            mid = low + (high-low)/2;
        }
        else if (b[mid] > a)
        {
            high = mid - 1; 
            mid = low + (high-low)/2;
        }
        if (low > high)
        {
            break;
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> M;
    long long Mlist[100000];
    
    for (int i = 0; i < M; i++)
    {
        long long input = 0;
        cin >> input;
        Mlist[i] = input;
    }

    sort(Mlist, Mlist+M);
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        long long input = 0;
        cin >> input;
        int a = checknum(input, Mlist, M);
        cout << a << '\n';
    }

    return 0;
}
