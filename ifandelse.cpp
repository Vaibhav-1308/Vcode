// Plans with Gayatri after CAE2
#include<iostream>
using namespace std;
int main(){

    int amount;
    cout<<"Enter the amount you have :";
    cin>>amount;

    if(amount>5000){
        if(amount>10000){
            cout<<"Camping with Gayatri";
        }else{
    cout<<"Shopping with Gayatri";
        }
    }
    else if(amount>3000){
    cout<<"Movie with Gayatri";
    }
    else{
    cout<<"Cafe with Gayatri";
    }

    return 0;
}