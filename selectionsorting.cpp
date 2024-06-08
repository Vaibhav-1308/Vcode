// selection sorting

#include<bits/stdc++.h>
using namespace std;


int32_t main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int temp=0;

    for(int i=0; i<=n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
     for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}