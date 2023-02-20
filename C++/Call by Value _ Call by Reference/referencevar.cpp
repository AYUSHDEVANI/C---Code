#include <iostream>

using namespace std;
int pointer(int &a, int &b);

int main()
{
    int x = 4;
    int y = 5;

    cout << "The Value Of X Is " << x << " The Value Of Y Is " << y << endl;
    pointer(x, y);
    cout << "The Value Of X Is " << x << " The Value Of Y Is " << y;

    return 0;
}

int pointer(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}