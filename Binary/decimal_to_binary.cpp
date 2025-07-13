#include<iostream>
using namespace std;


int decToBinary(int decNum){

    int pow = 1;
    int ans = 0;

    while(decNum>0){

        int rem = decNum % 2;
        decNum = decNum / 2;

        ans = ans + (pow * rem);
        pow = pow * 10;

    }

    return ans;

}

int main(){

    int decNum = 6;

    for(int i = 2; i<11; i++){
        cout<<decToBinary(i)<<" ";
    }


}