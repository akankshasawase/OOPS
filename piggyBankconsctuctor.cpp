#include<iostream>
using namespace std;
class AddAmount
{
    int amount=50;
public:
    AddAmount()
    {

    }
    AddAmount(int a)
    {
        amount=amount+a;
    }
    void display()
    {
        cout<<amount<<endl;
    }

};
int main()
{
    AddAmount a;
   // a.AddAmount();
    a.display();
    AddAmount b(25);

    b.display();
    return 0;
}


