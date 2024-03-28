#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (620 <= num && 780 >= num)
		cout << "Red";
	else if (590 <= num && 620 > num)
		cout << "Orange";
	else if (570 <= num && 590 > num)
		cout << "Yellow";
	else if (495 <= num && 570 > num)
		cout << "Green";
	else if (450 <= num && 495 > num)
		cout << "Blue";
	else if (425 <= num && 450 > num)
		cout << "Indigo";
	else if (380 <= num && 425 > num)
		cout << "Violet";

}