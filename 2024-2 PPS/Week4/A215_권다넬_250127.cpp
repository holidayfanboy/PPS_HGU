#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	for (int k = 0; k < 3; k++) {
		int N=0;
		long long sum = 0, flow=0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			long long temp;
			cin >> temp;
			long long prev = sum;
			sum = sum + temp;
			if (temp > 0 && prev > 0 && sum < 0) flow++;
			if (temp < 0 && prev < 0 && sum > 0) flow--;
		}
		if (flow == 0) {
			if (sum == 0) cout << '0' << endl;
			else cout << (sum > 0 ? '+' : '-') << endl;
		}
		else {
			cout << (flow > 0 ? '+' : '-') << endl;
		}
	}
}

// void calculate(vector<long long>& D) {
//     sort(D.begin(), D.end()); 
//     int left = 0, right = D.size() - 1;
//     long long sum = 0;

//     while (left <= right) 
//     {
//         if (left == right) 
//         {
//             sum += D[left]; 
//         } else 
//         {
//             sum += D[left] + D[right];
//         }
//         left++;
//         right--;
//     }

//     if (sum == 0) 
//     {
//         cout << "0" << endl;
//     } 
//     else if (sum > 0) 
//     {
//         cout << "+" << endl;
//     } 
//     else 
//     {
//         cout << "-" << endl;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for (int i = 0; i < 3; i++) 
//     {
//         int N;
//         cin >> N;
//         vector<long long> S(N);

//         for (int k = 0; k < N; k++) 
//         {
//             cin >> S[k];
//         }
//         calculate(S);
//     }

//     return 0;
// }
