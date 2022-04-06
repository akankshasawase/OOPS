#include<iostream>
#include<string.h>
using namespace std;
class marks
{
    int roll,s1,s2,s3;
    public:
    void stud()
 {

    for(int i=0;i<=8;i++)
    {
        for(int j=0;j<=8;j++)
        {
            cout<<"enter roll no:"<<endl;
            cin>>roll;
            cout<<"enter marks of first subject:"<<endl;
            cin>>s1;
            cout<<"enter marks of second subject:"<<endl;
            cin>>s2;
            cout<<"enter marks of third subject:"<<endl;
            cin>>s3;
            int avg=(s1+s2+s3)/3;
            cout<<"student rollno:"<<roll <<"average marks:"<<avg <<endl;
        }
    }
 }
};
int main()
{
    marks m;
    m.stud();
    return 0;
}
