#include <iostream>
using namespace std;

int n, y;
int sum;

int AbsoluteDiffrence(int x, int y)
{
	if (x - y < 0)
	{
		return (x - y) * -1;
	}
	else
	{
		return x - y;
	}
}

int main()
{
	cout << "Type a number: ";
	cin >> n;
	cout << "Type another number: ";
	cin >> y;

	sum = AbsoluteDiffrence(n, y);
	cout << " Absolute diffrence of " << n << " & " << y << " = " << sum;

	return 0;
}
