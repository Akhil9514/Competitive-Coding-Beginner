#include<iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[]={5,15,22,1,-5,-24};
    int size = 6;

    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        largest = max(largest, arr[i]);
    }

    cout<<"smallest is "<<largest<<endl;


}