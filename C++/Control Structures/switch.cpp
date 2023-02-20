#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "Enter Your Marks";
    cin >> mark;

    switch (mark)
    {
    case 1:
        cout << "Kadeval";
        break;

    case 2:
        cout << "Maulik";
        break;

    case 3:
        cout << "Maheshbhai";
        break;

    default:
        cout << "Sorry";
        break;
    }

    return 0;
}
