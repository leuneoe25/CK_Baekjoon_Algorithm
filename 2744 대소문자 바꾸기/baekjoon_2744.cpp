#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;

	string reuslt = "";


	for (int i = 0; i < str.size(); i++)
	{
		if ('A' <= str[i] && 'Z' >= str[i])
			reuslt += str[i] + ('a' - 'A');
		else if ('a' <= str[i] && 'z' >= str[i])
			reuslt += str[i] - ('a' - 'A');
	}
	cout << reuslt;
}