#include <iostream>

void foo1();
void foo2();

int main()
{
	foo1();
	foo1();
	foo2();
	foo2();

	return 0;
}

void foo1()
{
	std::cout << "Three blind mice" << std::endl;
}

void foo2()
{
	std::cout << "See how they run" << std::endl;
}