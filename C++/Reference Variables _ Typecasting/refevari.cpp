#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int &b = a;
    int c = a;

    cout << "The Value Of B Is :" << a << endl;
    cout << "The Value Of B Is :" << b << endl;
    cout << "The Value Of B Is :" << c << endl;
    cout << "The Value Of B Is :" << &a << endl;
    cout << "The Value Of B Is :" << &b;

    return 0;
}
