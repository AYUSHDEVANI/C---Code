#include <iostream>
using namespace std;

// This (<<) Is Insertion Operator
// This (>>) Is Extraction Operator

int main()
{
    int a, b;

    cout << "Enter Value Of A:\n";
    cin >> a;
    cout << a;

    cout << "\nEnter Value Of A:\n";
    cin >> b;
    cout << b;

    cout << "The Sum Of A & B Is : " << a + b;

    return 0;
}
