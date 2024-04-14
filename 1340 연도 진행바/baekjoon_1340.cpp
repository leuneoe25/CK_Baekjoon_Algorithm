#include <iostream>
#include <string>
using namespace std;

int getMonth(string str)
{
	if (str == "January")
		return 1;
	else if (str == "February")
		return 2;
	else if (str == "March")
		return 3;
	else if (str == "April")
		return 4;
	else if (str == "May")
		return 5;
	else if (str == "June")
		return 6;
	else if (str == "July")
		return 7;
	else if (str == "August")
		return 8;
	else if (str == "September")
		return 9;
	else if (str == "October")
		return 10;
	else if (str == "November")
		return 11;
	else if (str == "December")
		return 12;
	else
		return -1;

}
int getDay(int Month)
{
	switch (Month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return 28;
	default:
		return 0;
	}
}
bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
}

int main()
{
	string time;
	getline(cin, time);

	int temp = time.find(' ');

	int Month = getMonth(time.substr(0, temp));
	temp += 1;
	int day = stoi(time.substr(temp, temp+2));
	temp += 4;
	int year = stoi(time.substr(temp, temp + 4));
	temp += 5;
	int hour = stoi(time.substr(temp, temp + 2));
	temp += 3;
	int min = stoi(time.substr(temp, temp + 2));

	double YearProgress;
	double DayProgress = hour/24.0 + ((1/24.0)* (min/60.0));

	int sumDay = 0;
	for (int i = 1; i < Month; i++)
	{
		sumDay += getDay(i);
	}
	sumDay += day-1;

	if (IsLeapYear(year))
	{
		YearProgress = 366;
		if (Month > 2)
			sumDay++;
	}
	else
		YearProgress = 365;

	cout << fixed;
	cout.precision(9);
	cout << sumDay/ YearProgress * 100.0 + ((1/ YearProgress) * 100.0)*DayProgress <<endl;
}
