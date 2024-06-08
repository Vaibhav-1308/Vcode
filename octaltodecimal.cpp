#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(int n){

  int x=1;
  int ans = 0;
  while(n>0){
    int a = n%10;
    ans = ans + a*x;
    x= x*2;
    n = n/ 10;
  }
  return ans;
}

int octaltodecimal(int n){

  int x=1;
  int ans = 0;
  while(n>0){
    int a = n%10;
    ans = ans + a*x;
    x= x*8;
    n = n/ 10;
  }
  return ans;
}

int main(){

  int n;
  cin>>n;

  cout<<octaltodecimal(n);
  return 0;
}