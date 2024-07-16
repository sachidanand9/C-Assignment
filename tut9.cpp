//************* If else statments ************

#include<iostream>                  

using namespace std;

int main(){
    int age;
    cout<<"entre your age"<<endl;
    cin>>age;

    if(age<18){
        cout<<"you can't come to party"<<endl;
    } 
    else if(age==18){
        cout<<"you came to party by kid pass"<<endl;
    }
    else{
        cout<<" you can come to my party"<<endl;
    
    }

    return 0;
}
