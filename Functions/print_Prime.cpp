#include<iostream>
#include<math.h>
using namespace std;



bool isPrime(int n){

    int num = floor(sqrt(n));

    for(int i=2; i<=num; i++){
        if(n%i == 0) return false;
    }

    return true;
    
}




int main(){


    int n=17;

    for(int i=2; i<=n; i++){

        if(isPrime(i)){
            cout<<i<<" ";
        }
    }


    return 0;
}