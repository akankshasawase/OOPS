# include<iostream>
using namespace std;
class rectangle
{
    float length,breadth;
    public:
    rectangle()
    {
        length=0;
        breadth=0;
    }
    rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    rectangle (float side)
    {
        length=breadth=side;
    }
    void calculate()
    {
        float area;
        area=length*breadth;
        cout<<"area of rectangle:"<<area<<endl;
    }
};
int main()
{
    rectangle r1;
    rectangle r2(15,45);
    rectangle r3(10);
    r1.calculate();
    r2.calculate();
    r3.calculate();
    return 0;
}
