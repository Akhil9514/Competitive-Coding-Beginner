#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i;
    for(i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        
        if(i==1){cout<<"*";}
        else{
            cout<<"*";
            int space = (2*(i-1))-1;
            for(int k=1; k<=space; k++){
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;

    }

    for(i=n-1; i>=1; i--){
        
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        
        if(i==1){cout<<"*";}
        else{
            cout<<"*";
            int space = (2*(i-1))-1;
            for(int k=1; k<=space; k++){
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;

    }

    return 0;
}