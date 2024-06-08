#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z){
  
  int a = max(x, max(y,z));
  int b,c;
  cout<<"Max : "<<a<<endl;

  if(a == x){
    b=y;
    c=z;
  }else if(a == y){
    b=x;
    c=z;
  }else{
    b=y;
    c=x;
  }

  if( a*a == b*b + c*c ){
    return true;
  }else
    return false;

}

int32_t main(){
  int x, y, z;
  cin>>x>>y>>z;

  if(check(x, y, z)){
    cout<<"is Pythagorian triplet.";
  }else{
    cout<<"not a Pythgorian triplet.";
  }
  return 0;
}