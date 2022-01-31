#include <iostream>

using namespace std;

void printPascal(int n);

int main()
{
	int n;
	cout << "Please enter number of rows : ";
	cin >> n;
	printPascal(n);
	return 0;
}

void printPascal(int n)
{
	int arr[100][100];

	for (int l = 0; l < n; l++)
	{
		for (int i = 0; i <= l; i++)
		{
			if (l == i || i == 0)
				arr[l][i] = 1;
			else
				arr[l][i] = arr[l - 1][i - 1] + arr[l - 1][i];
			cout << arr[l][i] << " ";

		}
		cout << "\n";
	}
}
