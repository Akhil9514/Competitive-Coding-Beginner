#include<iostream>
using namespace std;



int main(){

    float n1,n2;
    cout<<"Please enter two numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Please enter the operator"<<endl;
    cin>>op;

    switch(op){

        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        case '%':
            cout<<n1%n2<<endl;
            break;


        default:
            cout<<"Please enter different operator"<<endl;
            break;
    }





    return 0;
}