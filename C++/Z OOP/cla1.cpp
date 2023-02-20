#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chak(void);
    void ones(void);
    void disp(void);
};

void binary ::read()
{
    cout << "Enter Binary Numbers" << endl;
    cin >> s;
}

void binary ::chak(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not Binary Numbers" << endl;
            exit(0);
        }
    }
}

void binary ::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}

void binary ::disp()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary bin;

    bin.read();
    bin.chak();
    bin.ones();
    bin.disp();

    return 0;
}