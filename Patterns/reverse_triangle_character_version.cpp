#include<iostream>
using namespace std;

int main(){

    int n=4;

    char ch = 'A'; ch--;

    for(int i=0; i<n; i++){

        for(int j=i+1; j>0; j--){

            cout<<char(ch+j)<<" ";

        }

        cout<<endl;
    }

    return 0;
}