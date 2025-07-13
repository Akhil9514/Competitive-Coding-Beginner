#include<iostream>
using namespace std;

int main(){

    int n=2345;

    int ans = 0;

    while(n>0){

        int rem = n%10;
        n = n/10;

        ans = (ans * 10) + rem;

    }

    cout<<"Reverse of is "<<ans;


    return 0;
}