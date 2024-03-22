#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	string answer = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != '-')
		{
			if (s[i] < 97)
				answer += s[i];
		}
	}
	cout << answer;
}