#include<iostream>
using namespace std;

class print
{
public:
    void output(int a,char c[30])
    {
        cout<<"Integer is:"<<a<<endl;
        cout<<"Character is:"<<c<<endl;

    }
    void output(char c[30],int a)
    {
        cout<<"Character is:"<<c<<endl;
        cout<<"Integer is:"<<a<<endl;

    }

};
int main()
{
    print o;
    o.output("Programming language",3);
    o.output(4,"Program");

    return 0;
}
