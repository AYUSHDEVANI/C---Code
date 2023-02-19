#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;

    if ((age < 18) && (age > 0))
    {
        cout << "You can not come to the party !" << endl;
    }
    else if(age==18)
    {
        cout<<"You are kid and you will get the kids pass "<<endl;
    }

    else if(age<1)
    {
        cout<<"You can not born "<<endl;
    }

    else {
        cout<<"You can come to the party ...."<<endl;
    }
    return 0;
}