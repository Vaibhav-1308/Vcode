#include<iostream>
using namespace std;

int main(){
    int n,j=1,i=1, k=1;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(j=n; j>=i+1; j--){
            cout<<" ";
        }

        for(k=n; k<=j && k>=-1*j; k--){
        cout<<k<<" ";
        }
        cout<<endl;
    }
}