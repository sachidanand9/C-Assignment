#include<iostream>
using namespace std;
void sum(int a,int b)
{
    int sum=a+b;
    cout<<"Sum of two numbers : "<<sum;
}

int main()
{
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    sum(x,y);
    return 0;
}