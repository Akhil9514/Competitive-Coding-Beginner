#include<iostream>
using namespace std;

int main(){

    int num1;
    cin>>num1;

    int num2;
    cin>>num2;

    int j;

    for(int i = num1; i<=num2; i++){
        
        for(j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
        }

        if(j==i){
            cout<<i<<endl;
        }

    }


    return 0;
}