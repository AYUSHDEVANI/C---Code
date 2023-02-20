#include <iostream>
using namespace std;

// Comparison Operators
int main()
{
    int a = 10;
    int b = 10;
    int c = 11;

    cout << "The Value Of A == B Is : " << (a == b) << endl;
    cout << "The Value Of A != B Is : " << (a != b) << endl;

    cout << "The Value Of A != B Is : " << (a != c) << endl;

    cout << "The Value Of A < B Is : " << (a < b) << endl;
    cout << "The Value Of A > B Is : " << (a > b) << endl;

    cout << "The Value Of A <= B Is : " << (a <= b) << endl;
    cout << "The Value Of A >= B Is : " << (a >= b) << endl;

    return 0;
}
