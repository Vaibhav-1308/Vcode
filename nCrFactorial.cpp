#include<iostream>

using namespace std;

int fact(int num){

    int factorial=1;

    for(int i=1; i<=num; i++){
        factorial *=i;
    }
    return factorial;
}

int main(){

    int n, nCr, r;
    cin>>n>>r;

    nCr = fact(n)/ (fact(n-r)* fact(r));
    cout<<nCr;
    return 0;
}