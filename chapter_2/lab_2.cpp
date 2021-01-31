#include <iostream>

int main()
{
	int furlongs;
	std::cout << "Enter the distance in furlongs: ";
	std::cin >> furlongs;
	std::cout << "Distances in yards: " << furlongs*220 << std::endl;

	return 0;
}