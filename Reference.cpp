#include <iostream>
using namespace std;

int main()
{
    int x = 18;
    int &y = x;
    // &y = x;
    cout << "The value of x is : " << x << endl;
    cout << "The value of y is : " << y << endl;

    y = 17;
    cout << "The value of x is : " << x << endl;
    cout << "The value of y is : " << y << endl;

    int a = 35;
    int b;
    b = a;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;

    b = 30;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;

    return 0;
}