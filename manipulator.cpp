#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 1, b = 22, c = 333, d = 4444;
    cout << "The value of a without manipulator is : " << a << endl;
    cout << "The value of b without manipulator is : " << b << endl;
    cout << "The value of c without manipulator is : " << c << endl;
    cout << "The value of d without manipulator is : " << d << endl;

    cout << "The value of a with manipulator is : " << setw(4) << a << endl;
    cout << "The value of b with manipulator is : " << setw(4) << b << endl;
    cout << "The value of c with manipulator is : " << setw(4) << c << endl;
    cout << "The value of d with manipulator is : " << setw(4) << d << endl;

    return 0;
}