#include <iostream>
using namespace std;

// Comparison Operators
int main()
{
    int a = 10;
    int b = 10;

    cout << "The Is Value Of Logical And(&&) Operators : " << ((a == b) && (a >= b)) << endl;
    cout << "The Is Value Of Logical And(&&) Operators : " << ((a == b) && (a != b)) << endl;

    cout << "The Is Value Of Logical Or(||) Operators : " << ((a == b) && (a >= b)) << endl;
    cout << "The Is Value Of Logical Or(||) Operators : " << ((a == b) || (a != b)) << endl;

    cout << "The Is Value Of Logical Not(!) Operators : " << (!(a == b)) << endl;

    return 0;
}
