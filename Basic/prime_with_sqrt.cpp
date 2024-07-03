#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool non_prime = 0;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout<<"Non-prime\n";
            non_prime = 1;
            break;
        }
    }
    if(!non_prime){cout<<"Prime\n";}

    return 0;
}