#include<iostream>
using namespace std;

class printnumber
{
public:
    void println(int a)
    {
        cout<<a<<endl;

    }
    void println(float a)
    {
        cout<<a<<endl;
    }
     void println(double a)
    {
        cout<<a<<endl;
    }
};
int main()
{
    printnumber o;
    o.println(3);
    o.println(3.6);
    o.println(2.566789908);
    return 0;
}
