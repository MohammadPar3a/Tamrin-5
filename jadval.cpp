#include <iostream>

using namespace std;

int main()
{
	int i, j, m, n;
	cout << "Please enter your range : ";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= 9)
				cout << i * j << "\t";
			else
				cout << i * j << "\t";
		}
		cout << endl;
	}
	return 0;
}
