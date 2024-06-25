#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=n; i>=1; i--){

        if(i==n){
            int only_star = i+(i-1);
            for(int j=1; j<=only_star; j++){cout<<"*";}
        }
        else{
            for(int j=1; j<=i; j++){cout<<"*";}
            for(int j=1; j<=(n-i)+((n-i)-1); j++){cout<<" ";}
            for(int j=1; j<=i; j++){cout<<"*";}
        }
        
        cout<<endl;
    }

    for(int i=1; i<=n; i++){

        if(i==n){
            int only_star = i+(i-1);
            for(int j=1; j<=only_star; j++){cout<<"*";}
        }
        else{
            for(int j=1; j<=i; j++){cout<<"*";}
            for(int j=1; j<=(n-i)+((n-i)-1); j++){cout<<" ";}
            for(int j=1; j<=i; j++){cout<<"*";}
        }
        
        cout<<endl;
    }
    
    return 0;
}