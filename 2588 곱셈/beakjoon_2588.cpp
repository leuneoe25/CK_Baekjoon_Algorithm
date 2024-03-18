#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1;
	string num2;
	cin >> num1 >> num2;

	int num3 = num1 * ((num2[2] - '0'));
	int num4 = num1 * ((num2[1] - '0'));
	int num5 = num1 * ((num2[0] - '0'));
	int num6 = num3 + (num4*10) + (num5*100);
	cout << num3 << endl;
	cout << num4 << endl;
	cout << num5 << endl;
	cout << num6 << endl;
}