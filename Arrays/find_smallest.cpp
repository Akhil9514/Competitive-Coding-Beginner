#include<iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[]={5,15,22,1,-5,-24};
    int size = 6;

    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        smallest = min(smallest, arr[i]);
    }

    cout<<"smallest is "<<smallest<<endl;


}