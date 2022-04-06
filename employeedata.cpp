#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    int empid;
    string empname;
    long long salary;
    int date;
public:
    void empdata();
    void display();
};
void employee:: empdata()
{
    for(int i=0;i<2;i++)
    {

      cout<<"enter employee id:"<<endl;
      cin>>empid;
      cout<<"enter employee name:"<<endl;
      cin>>empname;
      cout<<"enter employee salary:"<<endl;
      cin>>salary;
      cout<<"enter date of joining:"<<endl;
      cin>>date;
        }
    }




void employee:: display()

    {
        cout<<"Employee id"<<empid<<endl;
        cout<<"Emp Name"<<empname<<endl;
        cout<<"Emp salary"<<salary<<endl;
        cout<<"Emp joining date"<<date<<endl;
    }

int main()

{
    employee e[10];
    cout<<"Enter the employee information:"<<endl;
    for(int i=0;i<2;i++)
    {
        e[i].empdata();
    }
    cout<<"Employee Details:"<<endl;
    for(int i=0;i<2;i++)
    {
        e[i].display();
    }

    return 0;
}
