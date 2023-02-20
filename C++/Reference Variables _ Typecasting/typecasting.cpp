#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 10.5;

    cout << "This Is Int Value : " << a << endl;
    cout << "This Is Float Value : " << (float)a << endl;
    cout << "This Is Float Value : " << float(a) << endl;

    cout << "This Is Float To Int Value : " << (int)b << endl;
    cout << "This Is Float To Int Value : " << int(b) << endl;
    cout << "This Is Float To Int Value : " << (int)(b) << endl;

    int c = int(b);
    cout << "The Sum Of A + C Is :" << a + c << endl;

    cout << "The Sum Is : " << a + b << endl;
    cout << "The Sum Is : " << a + int(b) << endl;
    cout << "The Sum Is : " << a + (int)b << endl;

    return 0;
}
