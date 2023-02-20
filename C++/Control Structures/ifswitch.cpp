#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "Enter Your Marks" <<endl;
    cin >> mark;

    if (mark > 100)
    {
        cout << "Enter Mark Between 0 To 100";
    }
    else
    {
        switch (mark / 10)
        {
        case 10:
        case 9:
            // Mark Between 90 - 100
            cout << "Your Grade Is : A";
            break;

        case 8:
            // Mark Between 80 - 89
            cout << "Your Grade Is : B";
            break;

        case 7:
            // Mark Between 70 - 79
            cout << "Your Grade Is : c";
            break;

        case 6:
            // Mark Between 60 - 69
            cout << "Your Grade Is : B";
            break;

        case 5:
            // Mark Between 50 - 59
            cout << "Your Grade Is : B";
            break;

        default:
            cout << "Your Grade Is : F Or Fail";
            break;
        }
    }

    return 0;
}
