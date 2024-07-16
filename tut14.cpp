                                // Structures 
#include<iostream>
using namespace std;
struct employee
{
  int eID;
  float salary;
  char favChar;
};

                             // Union 

union money
{
  int rice;
  float car;
  char pound;
};                       

int main(){

//        union money m1;
//        m1.rice = 34;
//        m1.car = 'c';
//        cout<<m1.car    // ------> use one value at one time  
   /* struct employee prince;
    prince.eID = 9;
    prince.salary = 1500000;
    prince.favChar = 'R';

    cout<<"The value is"<<prince.eID<<endl; 
    cout<<"The value is"<<prince.salary<<endl;
    cout<<"The value is"<<prince.favChar<<endl; */



                                  // Enum 

       
          enum Meal{Breakfast , Lumch, Dinner};
         cout<<Breakfast;
         cout<<Lumch;
         cout<<Dinner;
                                
    return 0;
}