// Maximum of 3 nos 
#include<iostream>

using namespace std;

int main(){
    
    int a,b,c;

    cout<<"Enter any Three no. here:"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"The greatest no is "<<a;
        }else{
            cout<<"The greatest no is "<<c;
        }
    }else{
        if(b>c){
              cout<<"The greatest no is "<<b;
        }else{
              cout<<"The greatest no is "<<c;
        }
    }
return 0;
}