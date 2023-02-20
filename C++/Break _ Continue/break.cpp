#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
        if (i == 5)
        {
            break;
        }
    }

    cout << "Hii"  << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
        if (i == 8)
        {
            break;
        }
    }

    cout << "Hii"  << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}