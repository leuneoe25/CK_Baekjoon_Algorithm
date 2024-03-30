#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> answer;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		string ans =  "";
		ans += s[0];
		ans += s[s.length() - 1];
		answer.push_back(ans);
	}
	for (int i = 0; i < n; i++)
	{
		cout << answer[i] << endl;
	}
}