#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int spaces_before = n-1;

    for(int i=1; i<=n; i++){

        //before star space
        for(int j=1; j<=spaces_before; j++){
            cout<<" ";
        }

        //star
        for(int k=1; k<=n; k++){
            cout<<"*";
        }


        spaces_before--;

        cout<<endl;

    }


    return 0;
}