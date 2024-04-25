#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;

	cin >> N;

	/*int** arr = new int*[N];

	int count,num;

	for (int i = 0; i < N; i++)
	{
		cin >> count;
		arr[i] = new int[count];

		for (int j = 0; j < count; j++)
		{
			cin >> num;
			arr[i][j] = num;
		}
	}*/

	vector<int> arr;
	int sum = 0;
	int num;
	int c;

	for (int i = 0; i < N; i++)
	{
		sum = 0;
		cin >> c;
		for (int j = 0; j < c; j++)
		{
			cin >> num;
			sum += num;
		}

		arr.push_back(sum);
	}
	sort(arr.begin(), arr.end());

	int result = 0;
	for (int i = 0; i < N; i++)
	{
		result += arr[i] * (N - i);
		//cout << arr[i] << endl;
	}

	cout << result;
}