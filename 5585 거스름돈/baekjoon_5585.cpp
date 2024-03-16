#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate(int n)
{
	if (n >= 500)
		return n - 500;
	else if (n >= 100)
		return n - 100;
	else if (n >= 50)
		return n - 50;
	else if (n >= 10)
		return n - 10;
	else if (n >= 5)
		return n - 5;
	else if (n >= 1)
		return n - 1;
}

int main()
{
	int money;
	cin >> money;
	money = 1000 - money;

	int count = 0;
	while (money != 0)
	{
		money = calculate(money);
		count++;
	}

	cout << count;
}