#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int num1;
    int num2;

    cout << "Enter Num 1 : ";
    cin >> num1;

    cout << "Enter Num 2 : ";
    cin >> num2;

    cout << sum(num1, num2);

    return 0;
}