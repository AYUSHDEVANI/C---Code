#include <iostream>
using namespace std;

int main()
{
    int a = 18;
    float b = 20.56;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;

    cout << "The value of a is : " << (float)a << endl;
    cout << "The value of a is : " << float(a) << endl;

    cout << "The value of b is : " << (int)b << endl;
    cout << "The value of b is : " << int(b) << endl;

    cout << "The sum is : " << a + int(b) << endl;
    cout << "The sum is : " << a + (int)b << endl;

    cout << "The sum is : " << (float)a + (int)b << endl;
    cout << "The sum is : " << float(a) + b << endl;

    return 0;
}