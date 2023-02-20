#include <iostream>
using namespace std;

int main()
{
    // Put The kl in int *p = __ And So;
    // kl Not Addres
    int kl;

    // m[] Is Addres
    int m[] = {12, 15, 45, 18, 19};
    int *p = m;

    cout << &m[0] << endl;
    cout << p << endl;
    cout << (p + 1) << endl;
    cout << (p + 2) << endl;
    cout << (p + 3) << endl;
    cout << (p + 4) << endl;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;

    // Not Value Add In int m
    cout << *(p + 5) << endl;

    return 0;
}