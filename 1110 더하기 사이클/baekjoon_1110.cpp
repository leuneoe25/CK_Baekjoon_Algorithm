#include <iostream>
#include <string>
using namespace std;

int cycle(int num)
{
	string s_num = to_string(num);
	int sum = 0;
	for (int i = 0; i < s_num.size(); i++)
	{
		sum += (s_num[i]) - '0';
	}
	string s_sum = to_string(sum);
	return ((s_num[s_num.size() - 1] - '0') * 10) + (s_sum[s_sum.size()-1] - '0');
}

int main()
{
	int n;
	cin >> n;
	int temp = cycle(n);
	int count = 1;
	while (temp != n)
	{
		temp = cycle(temp);
		count++;
	}
	cout << count;
}