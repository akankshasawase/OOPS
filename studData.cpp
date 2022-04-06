# include<iostream>
#include<string>
using namespace std;
class student
{
    int age;
    string name,add;
public:
    student()
    {
        name="unknown";
        age=0;
        add="not available";
    }

    setinfo(char nam[20],int ag)
    {
        name=nam;
        age=ag;
        cout<<"Details of studend is:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    setinfo(string nam,int ag,string address)
    {
        name=nam;
        age=ag;
        add=address;
    }
    void display()
    {
        cout<<"Details of student is:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Address:"<<add<<endl;
    }

};
int main()
{
    int j=10;
student s[j];

int age;
string name ,add;

    cout<<"Enter Details of student :"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter Details of "<<i+1<<"student"<<endl;
        cout<<"Name:"<<endl;
        cin>>name;
        cout<<"Age:"<<endl;
        cin>>age;
        cout<<"Address:"<<endl;
        cin>>add;
        s[i].setinfo(name,age,add);
        cout<<endl;
    }
    cout<<"Displaying student Details"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter Details of "<<i+1<<"student"<<endl;
        s[i].display();
    }

return 0;
}

