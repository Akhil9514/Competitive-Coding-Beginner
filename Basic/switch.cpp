#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Enter button"<<endl;
    cin>>button;

    switch(button){

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



        default:
            cout<<"I am still learning"<<endl;
            break;
    }



    return 0;
}