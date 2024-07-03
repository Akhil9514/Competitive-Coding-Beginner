#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int coef = 1;
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        
        for(int j=1; j<=i; j++){
            if(j==1 || j==i){cout<<" "<<1<<"  ";}
            else if(i-2<=2){
                cout<<" "<<i-1<<"  ";
            }
            else{
                float num = (i/2);
                for(int k=1; k<=num; k++){
                    cout<<i-1;
                }
            }
        }

        cout<<endl;

    }

    return 0;
}