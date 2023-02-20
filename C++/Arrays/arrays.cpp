#include <iostream>
using namespace std;

int main()
{
    int mark[] = {10,20,30,40,50};
    int m[] = {1,2,3,4,5,6};
    
    cout << mark[0] << endl;
    cout << mark[1] << endl;
    cout << mark[2] << endl;
    cout << mark[3] << endl;
    cout << mark[4] << endl;
    cout << mark[5] << endl;

    cout << "This Chang Value"  << endl;
    m[3] ={55};

    cout << m[0] << endl;
    cout << m[1] << endl;
    cout << m[2] << endl;
    cout << m[3] << endl;
    cout << m[4] << endl;
    cout << m[5] << endl;

    return 0;
}