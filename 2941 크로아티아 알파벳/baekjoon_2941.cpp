#include <iostream>
using namespace std;

pair<int, int> Checkstr(string str)
{
	string list[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

	for (int i = 0; i < 8; i++)
	{ 
		int index = str.find(list[i]);
		
		if (0 <= index  && index < str.size())
		{
			//cout << list[i] << " " << index << endl;
			return { index,list[i].size() };
		}
	}
	return { -1,-1 };
	
}

int main()
{
	string str;
	cin >> str;
	int count = 0;
	int space = 0;

	pair<int, int> value = Checkstr(str);
	while (value.first != -1 && value.second != -1)
	{
		//str.erase(value.first, value.second);
		str.replace(value.first, value.second, " ");
		value = Checkstr(str);
		count++;
	}

	//cout << str << endl;
	cout << count + (str.size()-count);


}