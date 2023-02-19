#include <iostream>
using namespace std;

int main()
{
    int a = 18, b = 17;
    cout << "The operator in C++ : \n";
    cout << "Following are the type of operators : \n";
    cout << "Followint are the Arithmetic operators :\n";

    cout << "The value of a + b is : " << a + b << endl;
    cout << "The value of a - b is : " << a - b << endl;
    cout << "The value of a * b is : " << a * b << endl;
    cout << "The value of a / b is : " << a / b << endl;
    cout << "The value of a % b is : " << a % b << endl;
    cout << "The value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl;

    cout << "Followint are the Cmparison operators :\n";
    cout << "The value of a == b is : " << (a == b) << endl;
    cout << "The value of a != b is : " << (a != b) << endl;
    cout << "The value of a >= b is : " << (a >= b) << endl;
    cout << "The value of a <= b is : " << (a <= b) << endl;
    cout << "The value of a > b is : " << (a > b) << endl;
    cout << "The value of a < b is : " << (a < b) << endl;

    cout << "Following are the Logical  operators :\n";
    cout << "The value of this logical And operator ((a==b) && (a<b)) is :  " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical Or operator ((a==b) || (a>b)) is :  " << ((a == b) || (a > b)) << endl;
    cout << "The value of this logical Not operator (!(a==b)) is :  " << (!(a == b)) << endl;

    return 0;
}