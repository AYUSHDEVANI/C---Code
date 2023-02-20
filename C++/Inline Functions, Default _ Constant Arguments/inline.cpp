#include <iostream>
using namespace std;

inline int pro(int a, int b)
{
    return a * b;
}

int main()
{
    int num1;
    int num2;

    cout << "Enter Numbers";
    cin >> num1 >> num2;

    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;
    cout << "Two Numbers Product Is : " << pro(num1, num2) << endl;

    return 0;
}