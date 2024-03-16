#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int n1, int n2)
{
	return n1 < n2;
}

int main()
{
	int n;
	cin >> n;
	vector<int> vect;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		vect.push_back(temp);
	}
	sort(vect.begin(), vect.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << vect[i] << endl;
	}
}