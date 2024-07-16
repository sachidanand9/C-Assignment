#include<iostream>
using namespace std;
struct person
{
   char name[50];
   int age;
   double salary;
};

person dispaly(person p)
{
    cout<<"Name of the person : "<<p.name<<endl;
    cout<<"Age of the person : "<<p.age<<endl;
    cout<<"Salary of the person : "<<p.salary<<endl;
}
int main()
{
    
    person p;

    cout<<"Enter the full name :";
    cin.getline(p.name,50);
    cout<<"Enter the age :";
    cin>>p.age;
    cout<<"Enter the salary :";
    cin>>p.salary;
    
return 0;
}