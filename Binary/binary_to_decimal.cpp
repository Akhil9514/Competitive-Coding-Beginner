#include<iostream>
using namespace std;


int binToDec(int binNum){

    int ans = 0;
    int pow = 1;

    while(binNum > 0){

        int rem = binNum % 10;
        binNum = binNum / 10;

        ans = ans+(rem * pow);
        pow = pow * 2;

    }

    return ans;

}

int main(){

    int binNum = 1010;

    cout<<binToDec(binNum);

    return 0;
}