#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "Enter Your Marks";
    cin >> mark;

    if (mark >90)
    {
        cout<<"Mark Is : "<<mark <<endl << "Gread Is A";
    }
    else if ( (90 > mark) && (80 < mark))
    {
        cout<<"Mark Is : "<<mark <<endl << "Gread Is B";
    }
    else
    {
        cout<<"Mark Is : "<<mark <<endl << "Gread Is F";
    }
    

    return 0;
}
