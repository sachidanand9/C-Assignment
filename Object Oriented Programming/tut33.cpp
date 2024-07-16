#include<iostream>
using namespace std;

class BankDeposit{
       int principal;
       int year;
       float intrestRate;
       float returnValue;

       public:
         BankDeposit(){}
         BankDeposit(int p, int y, float r); // r can be a value ike 0.04
         BankDeposit(int p, int y, int r); // r can be value like 14
         void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    year = y;
    intrestRate = r;
    returnValue = principal;

    for ( int i = 0; i<y; i++){
        returnValue = returnValue*(1+intrestRate);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    year = y;
    intrestRate = float(r)/100;
    returnValue = principal;

    for ( int i = 0; i<y; i++){
        returnValue = returnValue*(1+intrestRate);
    }
}
void BankDeposit :: show(){
    cout<<" Principle amount was"<<principal
        <<" . Return value after"<<year
        <<" year is "<<returnValue<<endl;
}
int main(){
    BankDeposit bd1, bd2 , bd3;
    int p, y;
    float r;
    int R;

    cout<<" Entre the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();


    cout<<" Entre the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    
    return 0;
}