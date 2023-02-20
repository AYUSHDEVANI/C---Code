#include <iostream>
using namespace std;

int main()
{
    float a = 10.5;       // This Is double Value
    long double b = 10.5; // This Is double Value

    float c = 10.5f;       // This Is float Value
    long double d = 10.5l; // This Is long double Value

    float e = 10.5F;       // This Is float Value
    long double f = 10.5L; // This Is long double Value

    cout <<"The Size Of 3.14 Is :" << sizeof(3.14)<< endl;

    cout <<"The Size Of 3.14f Is :" << sizeof(3.14f)<< endl;
    cout <<"The Size Of 3.14F Is :" << sizeof(3.14F)<< endl;

    cout <<"The Size Of 3.14l Is :" << sizeof(3.14l)<< endl;
    cout <<"The Size Of 3.14L Is :" << sizeof(3.14L)<< endl;

    return 0;
}
