#include <iostream>
#include <string>
using namespace std;

string reserve(string s)
{
	string temp = "";
	for (int i = s.size()-1; i >= 0; i--)
	{
		temp += s[i];
	}
	return temp;
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	
	int n1 = stoi(reserve(s1));
	int n2 = stoi(reserve(s2));

	if (n1 > n2)
		cout << n1;
	else
		cout << n2;
}