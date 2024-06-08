#include<iostream>

using namespace std;

int main(){

    int a;
    
    cin>>a;

    int i = 1;
    i += a;

    int j =2;
    j -= a;

    int k =3;
    k *= a;

    int l = 4;
    l /= a;
 

    cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
    cout<<"Size of i : "<<sizeof(i)<<endl;
    cout<<"Siza of a : "<<sizeof(a);
      return 0;

}