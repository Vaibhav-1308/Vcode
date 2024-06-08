#include<iostream>

using namespace std;

int main(){

    int num1;
    int num2;
    int num3;

    cout<<"Enter three no.s = "<<endl;
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<endl<<num1<<" is the Greatest Number";
        }else{
            cout<<endl<<num3<<" is the Greatest Number";
        }
    }else{
        if(num2>num3){
            cout<<endl<<num2<<" is the Greatest Number";
        }else{
            cout<<endl<<num3<<" is the Greatest Number";
        }
    }
    return 0;
}