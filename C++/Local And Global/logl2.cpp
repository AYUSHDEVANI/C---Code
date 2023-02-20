#include <iostream>
using namespace std;

int a = 100;

int main()
{
    int a = 10;
    int b = 10;

    cout << "The Value Of A +B Is : " << a + b << endl;
    cout << "The Value Of A Is : " << a << endl;

    cout << "Yhe Value Of Global Is : " << ::a;

    return 0;
}
