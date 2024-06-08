#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;
  
  for(int i=0; i<=n; i++){
    sum += i;
  }
    cout<<sum;
    return 0;
}

// u can also use the formula n*(n+1)/2 for sum of n natural numbers
