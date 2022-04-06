#include<iostream>
using namespace std;

class degree
{
public:
    degree()
    {
        cout<<"I got a degree"<<endl;
    }
};
class undergraduate:public degree{
public:
    undergraduate()
    {
        cout<<"I am an undergraduate"<<endl;
    }
};
class postgraduate:public degree{
public:
    postgraduate()
    {
        cout<<"I am a postgraduate"<<endl;

    }
};
int main()
{
    undergraduate u;
    postgraduate p;
}
