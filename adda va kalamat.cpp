#include <iostream>

using namespace std;

int wordCounter(char* str);

int main()
{
	char str[200];
	cout << "Please enter your sentence : ";
	cin.getline(str, 200);
	cout << "\nNumber of words : " << wordCounter(str);
}

int wordCounter(char* str)
{
	bool status = false;
	int counter = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			status = false;
		else if (status == false)
		{
			status = true;
			++counter;
		}
		++str;
	}
	return counter;
}