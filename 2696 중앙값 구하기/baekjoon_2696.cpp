#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Median(vector<int> vect)
{
	sort(vect.begin(), vect.end());


	return vect[vect.size()/2];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	vector<vector<int>> answer;
	vector<int> vect;
	vector<int> MedianVect;
	for (int i = 0; i < T; i++)
	{
		int M;
		cin >> M;
		vect.clear();
		MedianVect.clear();
		for (int j = 0; j < M; j++)
		{
			int temp;
			cin >> temp;
			vect.push_back(temp);
			if ((j + 1) % 2 == 1)
			{
				MedianVect.push_back(Median(vect));
			}
		}
		answer.push_back(MedianVect);
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i].size()<<"\n";
		for (int j = 0; j < answer[i].size(); j++)
		{
			cout << answer[i][j] << " ";
		}
		cout << "\n";
	}
}