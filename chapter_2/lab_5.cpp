#include <iostream>

double CelsiusToFahrenheit(double celsius);

int main()
{
	double celsius;
	std::cout << "Please enter a Celsius value: ";
	std::cin >> celsius;
	std::cout << celsius << " degrees Celsius is " << CelsiusToFahrenheit(celsius) << " degrees Fahrenheit." << std::endl;

	return 0;
}

double CelsiusToFahrenheit(double celsius)
{
	return celsius*1.8 + 32;
}