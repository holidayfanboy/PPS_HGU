#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int maxv = 0;
	vector <int> tree(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> tree[i];
		if (tree[i] > maxv)
			maxv = tree[i];
	}
	int answer = maxv;
	int sum = 0;

	while (answer--)
	{
		for (int i = 0; i < n; i++)
		{
			if (tree[i] - answer > 0)
			{
				sum += tree[i] - answer;
			}
		}
		if (sum >= m)
				break;
				else
				sum = 0;
	}

	cout << answer;
	return 0;
}