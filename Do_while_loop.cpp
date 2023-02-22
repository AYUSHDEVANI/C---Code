#include<iostream>
using namespace std;

int main()
{
    int i=1;

    /*Syntex
        do{
            statement;
        }while(condition);
    */

    do{
        cout<<"6 X "<<i<<" = "<<6*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}