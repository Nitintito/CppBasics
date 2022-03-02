#include <iostream>

int a, b, oldA;
int swapType;

void SwapByPtr(int* a, int b)
{
	int* ptr = a;
	*ptr = b;
}

int SwapByRef(int& a, int& b)
{
	int& ref = a;
	ref = b;
	return a;
}

int main()
{
	std::cout << "Choose how to swap" << std::endl;
	std::cout << "1: STL\n2: Pointer\n3: Reference" << std::endl;
	std::cin >> swapType;

	std::cout << "Write a number to convert: " << std::endl;
	std::cin >> a;
	std::cout << "Write the new number: " << std::endl;
	std::cin >> b;
	std::cout << a << " : " << b << std::endl;
	oldA = a;

	if (swapType == 1)
	{
		std::swap(a, b);
	}
	else if (swapType == 2)
	{
		SwapByPtr(&a, b);
	}
	else if (swapType == 3)
	{
		SwapByRef(a, b);
	}
	
	std::cout << oldA << " is now = " << a << std::endl;
}
