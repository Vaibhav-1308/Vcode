// Binary Search
// for Binary Searching the elements should be in ascending order
// Binary search is better algorithm than the linear search

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){

    int s=0;
    int e=n;

    while(s<=e){
        int mid = (e + s)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>mid){
            e=mid-1;
        }else{
            s = mid+1;   
        }
    }
    return -1;
}

int32_t main(){
    
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key)<<" "<<endl;
    return 0;
} 