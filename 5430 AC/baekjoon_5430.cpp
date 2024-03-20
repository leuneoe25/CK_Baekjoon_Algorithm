#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
using namespace std;

vector<string> split(string str, char Delimiter) {
	istringstream iss(str);
	string buffer;

	vector<string> result;

	while (getline(iss, buffer, Delimiter)) {
		result.push_back(buffer);
	}

	return result;
}

deque<int> StringToDeque(string str,int size)
{
	deque<int> vect;
	string num = "";
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == ']')
		{
			if(num != "")
				vect.push_back(stoi(num));
			break;
		}
		if (str[i] == ',')
		{
			vect.push_back(stoi(num));
			num = "";
		}
		else
		{
			num += str[i];
		}
		
	}
	return vect;
}

string ExecuteCommand(deque<int> arr,string command)
{
	bool isfront = true;
	for (int i = 0; i < command.size(); i++)
	{
		switch (command[i])
		{
		case 'R':
			isfront = !isfront;
			break;
		case 'D':
			if (arr.size() >= 1)
			{
				if (isfront)
					arr.pop_front();
				else
					arr.pop_back();
			}
			else
				return "error";
			break;
		}
	}
	if(!isfront)
		reverse(arr.begin(), arr.end());

	string result = "[";
	for (int i = 0; i < arr.size(); i++)
	{
		result +=  to_string( arr[i]);
		if (i != arr.size() - 1)
			result += ',';
	}
	result += ']';

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	vector<string> answer;
	for (int i = 0; i < T; i++)
	{
		string p;
		cin >> p;
		int size;
		cin >> size;
		string arr;
		cin >> arr;

		answer.push_back(ExecuteCommand(StringToDeque(arr, size),p));
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << "\n";
	}
}