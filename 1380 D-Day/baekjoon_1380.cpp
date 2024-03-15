#include <iostream>
#include <string>
using namespace std;

bool CheckLeapyear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return 1;

			return 0;
		}
			
		return 1;
	}
	return 0;
}
int MonthDays(int month, bool Leapyear)
{
	switch (month)
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
		if (Leapyear)
			return 29;
		else
			return 28;
	}
}

class Date
{
public:
	int year;
	int month;
	int day;

	int SumDay()
	{
		int sum = day;
		while (month != 1)
		{
			month--;
			sum += MonthDays(month, CheckLeapyear(year));
		}
		return sum;
	}
};


string CalculateDate(Date date1, Date date2,int date1_sum,int date2_sum)
{
	if (date2.year != date1.year)
	{
		int days1, days2;
		if (CheckLeapyear(date1.year))
			days1 = 366 - date1_sum;
		else
			days1 = 365 - date1_sum;

		days2 = date2_sum;

		int d_year = date2.year - date1.year;
		if (d_year >= 1000)
		{
			if (d_year == 1000 && date1_sum > date2_sum)
			{
				// 1000 > d-day
			}
			else
				return "gg ";
		}
			
		int yearDay = 0;
		int m_year = date1.year + 1;
		while (m_year != date2.year)
		{
			if (CheckLeapyear(m_year))
				yearDay += 366;
			else
				yearDay += 365;

			m_year++;
		}

		return "D-" + to_string(days2 + days1 + yearDay);
	}
	else
	{
		return "D-" + to_string(date2_sum - date1_sum);
	}
}

int main()
{
	Date date1, date2;
	cin >> date1.year >> date1.month >> date1.day;
	cin >> date2.year >> date2.month >> date2.day;

	cout << CalculateDate(date1, date2, date1.SumDay(), date2.SumDay())<<endl;
}



