#include<iostream>

using namespace std;

int main(){
    
    int a;
    cin>>a;

    if(a%5==0 && a%3==0){
        cout<<"Both no are divisible.";
    }else if(a%5==0){
        cout<<"only divisible by 5.";
    }else if(a%3==0){
        cout<<" only divisible by 3";
    }else{
        cout<<"Divisible by none";
    }

    return 0;
    
}