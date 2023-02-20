#include <iostream>
using namespace std;

int pro(int a, int b)
{
    // Fast Time C Is 1           :: 1
    // Second Time  C = 1 And + 1 :: 2
    // Next Time C = 2 And + 1    :: 3

    // Like This For C
    // 0 + 1
    // 1 + 1
    // 2 + 1
    // 3 + 1

    static int c = 0;
    c = c + 1;
    return a * b + c;
}

int main()
{
    int num1;
    int num2;

    cout << "Enter Numbers" << endl;
    cin >> num1 >> num2;

    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;

    return 0;
}