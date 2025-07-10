#include <iostream>
#include <algorithm>

using namespace std;
int dp[11][31];

int solution(int n, int m)
{
	for (int i = 1; i <= m; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
	}

	return dp[n][m];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	cout << solution(n, m);
}