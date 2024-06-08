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

int hexadecimaltodecimal(string n){

  int x=1;
  int ans = 0;
  
  int s = n.size();
  for(int i=s-1; i>=0; i--){
    if(n[i] >= '0' && n[i] <= '9'){
      ans += x*(n[i]-'0');
    }else if(n[i] >= 'A' && n[i] <= 'F'){
      ans += x*(n[i]-'A' + 10);
    }
    x *= 16;

  }

  return ans;
}

int32_t main(){

  string n;
  cin>>n;

  cout<<hexadecimaltodecimal(n);
  return 0;
}