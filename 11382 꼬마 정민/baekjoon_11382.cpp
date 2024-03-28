#include <iostream>
using namespace std;

int main()
{
	long long int num;
	long long int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << sum;
}