#include<iostream>
using namespace std;
                                // inline Function

/* inline int product(int a , int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"The value of a and b is"<<endl;
    cin>>a>>b;
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; 
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; 
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; 
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; 
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; 
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; 
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; 
    cout<<"The prouduct of a and b is "<<product(a,b)<<endl; */
    
                                // Default Arguments
    int moneyrecived(int currentmoney , float factor = 1.04){
        return currentmoney*factor;
    }
    // int strlen(const char *p){

   // }
    int main(){
        int money = 100000;
        cout<<"if you have "<<money<<" RS in your bank account , you will recieve "<<moneyrecived(money)<<"RS after 1 year"; 
       
    
                                  
    return 0;
}