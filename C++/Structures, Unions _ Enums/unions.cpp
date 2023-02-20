#include <iostream>
using namespace std;

union student
{
    int roll;
    int school;
    int collage;
    char name;
};


int main()
{
    union student m;
    m.roll = 48;
    m.school = 548963;
    m.name = 'm';
    m.collage = 1045;// This Is Last Value Difine So Out Put Is This Is

    cout << m.roll  << endl;
    cout << m.school;    

    return 0;
}