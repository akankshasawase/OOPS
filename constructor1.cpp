#include<iostream>
using namespace std;

class programming
{
    string name;
public:
    programming(string sname)
    {
        name=sname;
        cout<<"I love programming language "<<name<<endl;
    }
    programming()
    {
        name="I love programming language";
        cout<<name;
    }

};
int main()
{
    string sname;

    programming  obj("java");
    programming obj1;

    return 0;
}

