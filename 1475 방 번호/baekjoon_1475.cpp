#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string num;
	cin >> num;

	int numArr[10] = { 0, };

	for (int i = 0;i < num.size(); i++)
	{
		numArr[num[i] - '0'] += 1;
	}
	int max = ceil(((float)numArr[6] + (float)numArr[9]) / 2);
	numArr[6] = 0;
	numArr[9] = 0;

	for (int i = 0; i < 9; i++)
	{
		if (max < numArr[i])
			max = numArr[i];
	}
	cout << max;
}