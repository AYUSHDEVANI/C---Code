#include <iostream>
using namespace std;

int a = 100; // F1 Step

void logl()
{
    // This Is Local Variable
    int sum;

    cout << a;
}

int main()
{
    int a = 50; // F2 Step Write
    a = 25;     // F3 Step Write
    bool t = true;
    bool f = false;

    cout << a;
    logl();

    cout << "\nThis Is For Bool True  : " << t;
    cout << "\nThis Is For Bool False : " << f;

    return 0;
}
