# include<iostream>
using namespace std;
int main()
{
    int h[100],n;
    int heightsum=0;
    float avg;
    cout<<"enter a no of students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter height of students:";
        cin>>h[i];
    }
    for(int i=0;i<n;i++)
    {
        heightsum=heightsum+h[i];
    }
    avg=heightsum/n;
    cout<<"Average of height of students is:"<<avg;
    return 0;
}
