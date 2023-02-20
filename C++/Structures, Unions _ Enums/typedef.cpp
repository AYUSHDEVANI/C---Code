#include <iostream>
using namespace std;

typedef struct student
{
    int no;
    int enroll;
    int mobile_no;
}eq;

int main()
{
    eq stu;

    stu.no = 1;
    stu.enroll = 48;
    stu.mobile_no = 12345;

    cout << stu.no << endl;
    cout << stu.enroll << endl;;
    cout << stu.mobile_no << endl;

    return 0;
}