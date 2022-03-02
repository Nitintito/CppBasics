#include <iostream>
using namespace std;

int celsius;
int farenheit;

int ConvertCelciusToFarenheit(int celsius)
{
    return celsius * 9 / 5 + 32;
}

int main()
{
	cout << "Type degrees in Celsius: ";

	cin >> celsius;
	farenheit = ConvertCelciusToFarenheit(celsius);

	cout << celsius << " degrees Celsius = " << farenheit << " degrees in Farenheit";

	return 0;
}