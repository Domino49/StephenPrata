#include <iostream>

void TimeOutput(int hours, int minutes);

int main()
{
	int hours, minutes;
	std::cout << "Enter the number of hours: ";
	std::cin >> hours;
	std::cout << "Enter the number of minutes: ";
	std::cin >> minutes;
	TimeOutput(hours, minutes);

	return 0;
}

void TimeOutput(int hours, int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes << std::endl;
}