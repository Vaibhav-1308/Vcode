#include<iostream>
using namespace std;

int main(){
    int n,j=1,i=1, k=1;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            cout<<" ";
        }

        for(k=1; k<=n; k++){
        cout<<"*";
        }
        cout<<endl;
    }
}