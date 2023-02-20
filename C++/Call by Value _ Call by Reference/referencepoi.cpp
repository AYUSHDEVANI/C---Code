#include <iostream>

using namespace std;
int sawp(int a, int b);
int pointer(int *a, int *b);

int main()
{
    int x = 4;
    int y = 5;

    cout << "The Value Of X Is " << x << " The Value Of Y Is " << y << endl;

    // This Is Roung
    //  cout << sawp(x,y);
    //  cout << "The Value Of X Is " <<x <<" The Value Of Y Is "<<y ;

    pointer(&x, &y);
    cout << "The Value Of X Is " << x << " The Value Of Y Is " << y;

    return 0;
}

// This Is Roung
int sawp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}