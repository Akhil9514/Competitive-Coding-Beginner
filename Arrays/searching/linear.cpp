#include<iostream>
using namespace std;


int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Please enter the size of array"<<endl;
    cin>>n;

    int key;

    cout<<"Please enter the elements of array"<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }

    cout<<"Please enter the key"<<endl;
    cin>>key;

    cout<<linearSearch(arr, n, key);


    return 0;
}

