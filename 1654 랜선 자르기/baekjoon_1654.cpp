#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Cheak(vector<long long> cable, long long length, long long count)
{
	long long cableCount = 0;

	for (int i = 0; i < cable.size(); i++)
	{
		cableCount += cable[i] / length;
	}

	if (cableCount >= count)
		return true;
	else
		return false;
}

int main()
{
	long long K, N;
	cin >> K >> N;
	vector<long long> cable;

	long long num;
	for (int i = 0; i < K; i++)
	{
		cin >> num;
		cable.push_back(num);
	}
	
	sort(cable.begin(), cable.end());

	long long start = 1;
	long long end = cable[cable.size()-1] + 1;

	while (start +1 < end)
	{
		long long mid = (start + end) / 2;

		if (Cheak(cable, mid, N))
			start = mid;
		else
			end = mid;
	}
	cout << start;
}