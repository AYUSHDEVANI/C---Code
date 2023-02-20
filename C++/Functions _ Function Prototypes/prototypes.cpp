#include <iostream>

using namespace std;
int sum(int a, int b);
void maulik();

// Function Prototypes
// void maulik(void);     :: True
// int sum (int ,int);    :: True
// int sum(int a,int b);  :: True
// int sum(int a, b);     :: False

int main()
{
    int num1;
    int num2;

    cout << "Enter Num 1 : ";
    cin >> num1;

    cout << "Enter Num 2 : ";
    cin >> num2;

    // num1 And num2 Are Actual Parameters
    cout << "The Numbers Sum Is : " << sum(num1, num2) << endl;
    maulik();

    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b Will Be Taking Values From Actual Parameters num1 And num2
    int c = a + b;
    return c;
}

void maulik()
{
    cout << "Hii I Am MAulik Kadeval";
}