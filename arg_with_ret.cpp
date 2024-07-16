
#include<iostream>
using namespace std;

int add(int a,int b)
{
    int s=a+b;
    return s;
}

int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    int sum=add(x,y);
    cout<<"Sum of two numbers :"<< sum;
    return 0;
}