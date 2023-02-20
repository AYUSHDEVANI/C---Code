#include <iostream>
using namespace std;

class trye
{
    int enroll;
    char name[];
    char name2[];

public:
    void add();
    void display();
};

void trye ::add()
{
    cout << "Enter Roll Numbers : ";
    cin >> enroll;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Second Name : ";
    cin >> name2;
}

void trye ::display()
{
    cout << "Student RollNumber : " << enroll << endl;
    cout << "Sudent Full Name   : " << name << " " << name2;
}

int main()
{
    trye det;

    det.add();
    det.display();

    return 0;
}