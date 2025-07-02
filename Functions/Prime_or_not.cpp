#include<iostream>
#include<math.h>
using namespace std;


bool isPrime(int n){

    int num = floor(sqrt(n));

    for(int i=2; i<=num; i++){
        if(num%i == 0) return false;
    }

    return true;
    
}

int main(){

    int n=10;

    cout<<isPrime(n);

    return 0;
}