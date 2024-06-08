#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n;
    cin>>n;
    
    int choco = n;

    while(n>=3){
        int rap = n / 3;
        choco = choco + rap;
        n = rap + n%3;
    }

    cout<<choco<<endl;
    return 0;
}