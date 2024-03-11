#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int n, m;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		arr.push_back(m);
	}
	sort(arr.begin(), arr.end());
	cin >> n;
	int* num = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		cout << binary_search(arr.begin(), arr.end(), m) << '\n';
	}

}