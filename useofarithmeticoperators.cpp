#include<iostream>

using namespace std;

int main(){

    int i=10 , j=20 ,k;
    int m = 0;
        //10  //9     //19  //20  //9 //20    //10//19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++ ;
       //10    //20
 cout<<i<<" "<<j<<" "<<k ;

    return 0;
}