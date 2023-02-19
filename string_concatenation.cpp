#include<iostream>
#include<string>

using namespace std;

int main()
{
    string firstname = "Ayush";
    string secondname = "Devani";
    string fullname;

    cout<<"Fullname = "<<firstname + secondname<<endl;
    cout<<"Fullname = "<<firstname + " " + secondname<<endl;

    cout<<"Fullname = "<<firstname.append(secondname)<<endl;

    return 0;
}