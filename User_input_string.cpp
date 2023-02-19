#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname;

    // For space cut the world
    // cout << "Enter your fullname : " << endl;
    // cin >> fullname;
    // cout << "Your fullname is : " << fullname << endl;

    cout << "Enter your fullname : " << endl;
    getline(cin, fullname);
    cout << "Your fullname is : " << fullname << endl;

    return 0;
}