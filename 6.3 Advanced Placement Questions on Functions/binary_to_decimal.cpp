#include<iostream>
using namespace std;

int binaryToDecimal(int n){

    int y=1;
    int ans=0;
    while(n>0){
        int x = n%10;
        ans += y*x;
        y *= 2;
        n = n/10;
    }
    return ans;

}

int main(){

    int n;
    cin>>n;

    cout<<binaryToDecimal(n)<<endl;

    return 0;
}