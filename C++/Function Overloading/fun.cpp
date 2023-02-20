#include <iostream>
using namespace std;

int sum(int x, int y)
{
    cout << "This Is For A+B" << endl;
    return x + y;
}

// This For Arror
// int sum(int x, int y)
// {
//     cout << "This Is For A+B" << endl;
//     return x + y + 1;
// }

int sum(int x, int y, int z)
{
    return x + y + z;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;

    cout << sum(a, b) << endl;
    cout << sum(a, b, c) << endl;

    return 0;
}