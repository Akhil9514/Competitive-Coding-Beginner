#include<iostream>
using namespace std;

int sum_n_natural_no(int n){
    return (n*(n+1))/2;

}

int main(){

    int n;
    cin>>n;

    cout<<sum_n_natural_no(n);

    return 0;
}