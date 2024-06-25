#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        int count = 1;
        for(int k=1; k<=i; k++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }



    return 0;
}
