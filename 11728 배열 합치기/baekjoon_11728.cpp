#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	cin >> n>>m;
	vector<int> arr1;
	vector<int> arr2;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr1.push_back(temp);
	}
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		arr2.push_back(temp);
	}
	arr1.insert(arr1.end(), arr2.begin(), arr2.end());
	sort(arr1.begin(), arr1.end());

	for (int i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i]<<" ";
	}
}