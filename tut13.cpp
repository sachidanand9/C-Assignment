                   // Arrays //
#include<iostream>
using namespace std;

int main(){
    int marks[] = {55, 65, 75, 95};
    cout<<marks[0]<<endl; 
    cout<<marks[1]<<endl; 
    cout<<marks[2]<<endl; 
    cout<<marks[3]<<endl; 
    
 
            /* Watch This Tutorial Again */
// Quik quiz :- Do the same using while & do-while loop ? 


                                  /* Pointers and Array*/

int* p = marks;
cout<<"The value of *p is"<<*p<<endl;
cout<<"The value of *(p+1) is"<<*(p+1)<<endl;
cout<<"The value of *(p+2) is"<<*(p+2)<<endl;
cout<<"The value of *(p+3) is"<<*(p+3)<<endl;

   return 0;
}