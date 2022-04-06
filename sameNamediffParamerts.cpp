#include<iostream>
using namespace std;

class area
{
public:
    void output(int l,char b)
    {
        cout<<"Area of Rectangle is:"<<l*b<<endl;


    }
    void output(int a)
    {
        cout<<"Area of square is:"<<a*a<<endl;

    }

};
int main()
{
    area o1;
    o1.output(5,3);
    o1.output(4);

    return 0;
}

