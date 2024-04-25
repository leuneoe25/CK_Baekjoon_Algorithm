#include <iostream>
#include <string>
using namespace std;

bool checkNumder(int num)
{
	string str = to_string(num);
	int count = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (count >= 3)
			return true;

		if (str[i] == '6')
			count++;
		else
			count = 0;
	}

	if (count >= 3)
		return true;

	return false;
}

int main()
{
	int N;
	cin >> N;

	int numCount = 0;
	int num = 0;

	while (numCount < N)
	{
		num++;
		if (checkNumder(num))
			numCount++;

	}

	cout << num;
}