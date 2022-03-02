#include <iostream>

bool checkIfAP(int arr[], int arrayLenght)
{
    if (arrayLenght == 1)
        return true;
    int n = arr[1] - arr[0];
    for (int i = 2; i < arrayLenght; i++)
        if (arr[i] - arr[i - 1] != n)
            return false;

    return true;
}

int main()
{
    int arr[] = { 1, 10, 19, 28, 37 }; // Change array to check if AP...
    int n = sizeof(arr) / sizeof(arr[0]);

    (checkIfAP(arr, n)) ? (std::cout << "Yes" << std::endl) : (std::cout << "No" << std::endl);

    return 0;
}