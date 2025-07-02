#include<iostream>
using namespace std;


int factorial(int n){

    if(n==0 || n==1){
        return 1;
    }else{
        
        int fact = 1;
        for(int i = 2; i <= n; i++){
            fact *= i;
        }

        return fact;

    }
}

int main(){

    int n = 8;
    int r = 2;

    int nCr = factorial(n)/(factorial(r) * factorial(n-r));

    cout<<nCr<<endl;

    return 1;
}