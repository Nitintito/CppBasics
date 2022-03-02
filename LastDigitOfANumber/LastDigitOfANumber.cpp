#include <iostream>
using namespace std;

int n;
int last;

int LastNumber(int n)
{
	return n % 10;
}

int main()
{
	cout << "Enter an integer: ";
	cin >> n;
	last = LastNumber(n);
	cout << "The last diget of number " << n << " is " << last;

	return 0;
}
