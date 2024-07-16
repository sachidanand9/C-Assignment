// Pointers 
                   /*  What is Pointers ? */
  /* Ans:- Data type which holds the adress of others data types */
#include<iostream>

using namespace std;

int main(){

    int a = 3; 
    int* b = &a;
                   /* & ----> Address of Operator*/
     cout<<" The adress of a is"<<&a<<endl;
     cout<<" The adress of b is"<<b<<endl;

                  /* * ----> Dereference Operator*/              
      cout<<"The value of adress b is"<<*b<<endl;        

                /* Pointer to Pointer */

        int**c = &b;

        cout<<"The address of b is "<<&b<<endl;           
        cout<<"The address of b is "<<c<<endl;
        cout<<"The valu of address at c is "<<&*c<<endl;
        cout<<"The address at value_at(value_at(c))is "<<**c<<endl;

    
    return 0; 
}