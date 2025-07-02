#include<iostream>
using namespace std;


int fibonacci(int n){

    int fibo = 1;
    for(int i=1; i<=n; i++){

        if(i == 1){
            // cout<<i<<endl;
        }else{
            fibo = i+(i-1);
            // cout<<fibo<<endl;
        }
        
    }

    return fibo;


}


int main(){


    int n=10;
    cout<<fibonacci(n);


}