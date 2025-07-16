#include<iostream>
using namespace std;


int main(){

    int arr[] = {23,5,66,3,7};
    int size = 5;

    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[size-1-i]);
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}