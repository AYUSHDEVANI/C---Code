#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }

    cout << "Hii" << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            continue;
        }
        cout << i << endl;
    }

    cout << "Hii" << endl;

    // Not Work
    // Cout Is Fast for the if
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
        if (i == 8)
        {
            continue;
        }
    }

    return 0;
}