#include<iostream>
using namespace std;

class Employee 
{
    private:
    int a,b,c;


    public:
    int d,e;

    void setData(int x,int y,int z);
    void getData()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
        cout<<"e = "<<e<<endl;
    }

};

void Employee :: setData(int x,int y,int z){
    a=x;
    b=y;
    c=z;
}


int main()
{
    Employee ayush;
    ayush.d=17;
    ayush.e=18;
    ayush.setData(1,4,8);
    ayush.getData();

    return 0;
}