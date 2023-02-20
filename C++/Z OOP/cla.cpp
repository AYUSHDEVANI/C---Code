#include <iostream>
using namespace std;

class student
{
private:
    int a, b, c;

public:
    int d, e;

    void fast(int a1, int b1, int c1);
    void second()
    {
        cout << "The Value Is " << a << endl;
        cout << "The Value Is " << b << endl;
        cout << "The Value Is " << c << endl;
        cout << "The Value Is " << d << endl;
        cout << "The Value Is " << e << endl;
    }
};

void student ::fast(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    student maulik;

    // maulik.a = 1; //Arror :: This Is Private

    maulik.d = 100;
    maulik.e = 101;

    maulik.fast(1, 2, 3);
    maulik.second();

    return 0;
}