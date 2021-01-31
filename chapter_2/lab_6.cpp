#include <iostream>

double LightYearsToAstronomicalUnits(double light_years);

int main()
{
	double light_years;
	std::cout << "Enter the number of light years: ";
	std::cin >> light_years;
	std::cout << light_years << " light years = " << LightYearsToAstronomicalUnits(light_years) << " astronomical units." << std::endl;

	return 0;
}

double LightYearsToAstronomicalUnits(double light_years)
{
	return light_years*63240;
}