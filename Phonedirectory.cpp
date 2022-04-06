#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class personDetails
{
    string Pname,Padd,  PphoneNo, PMobNO, Phead;
public:
    personDetails(string name,string add, string phoneNo,string MobNO,string head)
    {
        Pname=name;
        Padd=add;
        PphoneNo=phoneNo;
        PMobNO=MobNO;
        Phead=head;

    }
    void display();
};
 void personDetails::display()
 {
     cout<<"\n Name:"<<Pname<<endl;
     cout<<"\n Address:"<<Padd<<endl;
     cout<<"\n Phone NO:"<<PphoneNo<<endl;
     cout<<"\n Mobile No:"<<PMobNO<<endl;
     cout<<"\n Head of family:"<<Phead<<endl;
 }
 int main()
 {
     string name,add, phoneNo, MobNO, head ;
     cout<<"\n Enter Person's Details \n";
     cout<<"\n Name of Person:";
     cin>>name;
     cout<<"\n Address:";
     cin>>add;
     cout<<"\n Phone No:";
     cin>>phoneNo;
     cout<<"\n Mobile No:";
     cin>>MobNO;
     cout<<"\n Head of Family:";
     cin>>head;

     personDetails p1(name,add, phoneNo, MobNO, head);
     p1.display();
     return 0;
 }



