#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int n1, int n2)
{
	return n1 > n2;
}

int main()
{
	int n, k;
	vector<int> vect;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		vect.push_back(num);
	}

	sort(vect.begin(), vect.end(), compare);

	cout << vect[k - 1];
}