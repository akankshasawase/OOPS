# include<iostream>
using namespace std;
class student
{
    string name;
public:
    student(string sname)
    {
        name=sname;
        cout<<name<<endl;
    }
    student()
    {
        name="unknown";
        cout<<name;
    }

};
int main()
{
    string sname;
    /*cout<<"enter a name:";
    cin>>sname;*/
    student obj("Tom");
    student obj1;

    return 0;
}
