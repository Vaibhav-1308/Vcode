// Calculator using switch case

#include<iostream>
using namespace std;

int main(){

    float n1,n2;
    cout<<"Enter any two numbers:"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Enter any operator here: "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<"Addition : "<<n1+n2<<endl;
        break;

        case '-':
    cout<<"Subtraction : "<<n1-n2<<endl;
        break;

        case '*':
    cout<<"Multiplication : "<<n1*n2<<endl;
        break;

        case '/':
    cout<<"Division : "<<n1/n2<<endl;
        break;
    
    default:
    cout<<"Enter another operator."<<endl;
        break;
    }

    
    return 0;
}