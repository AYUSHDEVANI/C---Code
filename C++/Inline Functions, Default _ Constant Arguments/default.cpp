#include <iostream>
using namespace std;

float money(float add, float bank = 1.04)
{
    return add * bank;
}

int main()
{
    float youadd = 100000;

    // Not Give Secound Value So Taht In Money Function Give Value Is 1.04
    cout << "You Add Money In Bank " << youadd << " You Recive After 1 Year " << money(youadd) << endl;

    // // You Give Secound Value so That
    cout << "You Add Money In Bank " << youadd << " You Recive After 1 Year " << money(youadd, 1.02) << endl;
    cout << "You Add Money In Bank " << youadd << " You Recive After 1 Year " << money(youadd, 1.04) << endl;

    return 0;
}