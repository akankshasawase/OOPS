#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

 class bank
 {
     int acno;
     char name[100],aatype[100];
     float balance;
 public:
    bank(int accNo,char *accountholder,char *acctype,float bal)
    {
        acno=accNo;
       strcpy(name,accountholder);
       strcpy(aatype,acctype);
        balance=bal;

    }
    void deposite();
    void withdraw();
    void display();
 };
 void bank::deposite()
 {
     int deAmmount;
     cout<<"\n Enter deposite amount:";
     cin>>deAmmount;
     balance=balance+deAmmount;
 }
 void bank::withdraw()
 {
     int wAmmount;
     cout<<"\n Enter withdraw amount:";
     cin>>wAmmount;
     if(wAmmount>balance)
     {
         cout<<"cannot withdraw ammount"<<endl;
     }
     else
     {

       balance=balance-wAmmount;
     }
 }
 void bank::display()
 {
     cout<<"\n Account NO:"<<acno<<endl;
     cout<<"\n Name:"<<name<<endl;
     cout<<"\n Account Type:"<<aatype<<endl;
     cout<<"\n Balance:"<<balance<<endl;

 }
 int main()
 {
     int accNo;
     char accountholder[100];
     char acctype[100];
     float bal;
     cout<<"\n Enter  Details \n";
     cout<<"\n Account No";
     cin>>accNo;
     cout<<"\n Name:";
     cin>>accountholder;
     cout<<"\n Account Type:";
     cin>>acctype;
     cout<<"\n Balance:";
     cin>>bal;

     bank b1(accNo,accountholder,acctype,bal);
     b1.deposite();
     b1.withdraw();
     b1.display();
     return 0;
 }


