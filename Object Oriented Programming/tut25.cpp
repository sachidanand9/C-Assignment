#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
       void setId(void){
           salary = 122;
           cout<<" Enter the id of Employee"<<endl;
           cin>>id;
       }
       void getId(void){
           cout<<" The id os this Employee is"<<id<<endl;
       }
};
int main(){
    /* Employee harry , prince, rohan, yuvi;
     harry.setId();
     harry.getId(); */

     Employee fb[4];
     for(int i = 0; i<4; i++){
         fb[i].setId();
         fb[i].getId(); 

     }
    
    return 0;
}