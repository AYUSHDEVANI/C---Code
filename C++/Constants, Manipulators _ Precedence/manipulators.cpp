#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 1, b = 12, c = 123, d = 1234;

    cout << "This Is A : " << setw(4) << a << endl;
    cout << "This Is B : " << setw(4) << b << endl;
    cout << "This Is C : " << setw(4) << c << endl;
    cout << "This Is D : " << setw(4) << d << endl;

    return 0;
}
