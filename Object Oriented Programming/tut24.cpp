                                 /* Static Data Members & Methods */
#include<iostream>
using namespace std;

class Employee{
         int id;
         static int count;

     public:
           void setData(void)
           {
               cout<<"Enter the id "<<endl;
               cin>>id;
               count++;
           }    
           void getData(void) 
           {
               cout<<"The id of this employee is "<<id<<"and this employee number"<<count<<endl;
           }

           static void getCount(void){
               //cout<<id; ---> throws an error
               cout<<"The value of cout is"<<count<<endl;
           }
};
           // Count is the static data mamber of class employee

 int Employee :: count; // default value is 0          

int main(){
    Employee harry, prince, rohan;
    /* harry.id = 1;
       harry.count = 1;  ----> cannot do this as id and cout are private */

       harry.setData();
       harry.getData();
       Employee::getCount(); 
    
       prince.setData();
       prince.getData();
       Employee::getCount();

       rohan.setData();
       rohan.getData();
       Employee::getCount();
    return 0;
} 