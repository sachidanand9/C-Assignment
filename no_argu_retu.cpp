#include<iostream>
using namespace std;
int add()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int c=a+b;
    return c;
}
int main()
{
    int sum;
    sum=add();
    cout<<"Sum of two numbers : "<<sum;
    return 0;
}