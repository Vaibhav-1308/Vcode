// Multiple language robot

#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Enter any button between a & e here:"<<endl;
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;

        case 'b':
        cout<<"Namaste"<<endl;
        break;

        case 'c':
        cout<<"Hola"<<endl;
        break;

        case 'd':
        cout<<"Ciao"<<endl;
        break;

        case 'e':
        cout<<"Salute"<<endl;
        break;

        default:
        cout<<"I am still learning !!!"<<endl;
        break;

    }
    return 0;
}