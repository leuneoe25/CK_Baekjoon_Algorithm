#include <iostream>
#include <string>
using namespace std;

int disassemble(int num)
{
	int n = 0;
	while (num > n)
	{
		int sum = 0;
		string s = to_string(n);

		for (int i = 0; i < s.size(); i++)
		{
			sum += s[i] - '0';
		}
		sum += n;
		//cout << n << " " << sum << endl;
		if (sum == num)
			return n;
		n++;
	}
	return 0;
}

int main()
{
	int N;
	cin >> N;
	cout << disassemble(N);
}
