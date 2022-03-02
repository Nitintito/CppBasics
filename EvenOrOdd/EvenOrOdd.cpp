#include <iostream>
using namespace std;

int n;

bool EvenOrOdd(int n)
{
	if (n % 2 == 0)
		return true;
	else
		return false;	
}

int main()
{
	cout << "Enter an integer: ";
	cin >> n;

	if (EvenOrOdd(n))
		cout << n << " is even.";
	else
		cout << n << " is odd.";
}
