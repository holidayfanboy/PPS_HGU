#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int input = 0;
		cin >> input;
		if (input == 0)
		{
			break;
		}
		int test = input;
		int sum = 1;
		while (test > 0)
		{
			int a = test%10;
			if (a == 0)
			{
				sum += 4;
			}
			else if (a == 1)
			{
				sum += 2;
			}
			else
			{
				sum += 3;
			}
			sum += 1;
			test = test/10;
		}
		cout << sum << endl;
	}
}