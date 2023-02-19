#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enetr your age : "<<endl;
    cin>>age;

    switch(age)
    {
        case 18:
        { 
            cout<<"Your age is 18."<<endl;
            break;
        }

        case 17:
        {
            cout<<"Your age is 17."<<endl;
            break;
        }

        case 30:
        {
            cout<<"Your age is 30."<<endl;
            break;
        }

        default :
        {
            cout<<"No special cases...."<<endl;
            break;
        }
    }

    return 0;
}