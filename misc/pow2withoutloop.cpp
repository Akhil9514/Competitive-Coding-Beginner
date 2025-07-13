#include<iostream>
using namespace std;

int main(){

    int n = 256;

    (n & (n-1)) == 0 ? cout<<"True" : cout<<"False";

    return 0;
}