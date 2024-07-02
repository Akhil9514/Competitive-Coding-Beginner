#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int space = 2*n-4;

    for(int i=1; i<=n; i++){

        if(i==1){
            cout<<"*";
            for(int j=1; j<=2*n-2; j++){cout<<" ";}
            cout<<"*";
            }
        else{

            cout<<"*";
            for(int j=1; j<=i-2; j++){cout<<" ";}
            cout<<"*";

            for(int j=space; j>0; j--)
            {
                cout<<" ";   
            }
            space = space-2;

            cout<<"*";
            for(int j=1; j<=i-2; j++){cout<<" ";}
            cout<<"*";

        }

        cout<<endl;

    }

    space = 0;
    for(int i=n; i>=1; i--){

        if(i==1){
            cout<<"*";
            for(int j=1; j<=2*n-2; j++){cout<<" ";}
            cout<<"*";
            }
        else{

            cout<<"*";
            for(int j=1; j<=i-2; j++){cout<<" ";}
            cout<<"*";

            for(int j=0; j<space; j++)
            {
                cout<<" ";   
            }
            space = space+2;
            

            cout<<"*";
            for(int j=1; j<=i-2; j++){cout<<" ";}
            cout<<"*";

        }

        cout<<endl;

    }

    return 0;
}