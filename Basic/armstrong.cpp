#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int orignaln = n;

    int sum=0;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n = n/10;
    }

    if(sum == orignaln){cout<<"Armstron number";}
    else{cout<<"Non-Armstrong number";}

    return 0;
}