#include <iostream>
#include <cmath>
using namespace std;

int Change16(char s)
{
	switch (s)
	{
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case 'A':
		return 10;
	case 'B':
		return 11;
	case 'C':
		return 12;
	case 'D':
		return 13;
	case 'E':
		return 14;
	case 'F':
		return 15;
	default:
		return 0;
	}
}

int main()
{
	string s;
	cin >> s;

	int num = 0;
	int index = 0;
	for (int i = s.size()-1; i >= 0; i--)
	{
		num += Change16(s[i]) * pow(16.0, index);
		index++;
	}
	cout << num;
}