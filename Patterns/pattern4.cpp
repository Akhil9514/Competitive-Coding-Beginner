#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Please enter the value of n : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        
        int no_of_space = n-i;
        int no_of_star = n-no_of_space;

        for(int j=1; j<=no_of_space; j++){
            cout<<" ";
        }

        for(int k=1; k<=no_of_star; k++){
            cout<<"*";
        }

        cout<<endl;
    }


    return 0;
}