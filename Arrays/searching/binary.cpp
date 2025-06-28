#include<iostream>
using namespace std;


int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    
    cout<<"s"<<s<<endl;
    cout<<"e"<<e<<endl;

    while(s<=e){
        
        cout<<"Running Binary Serach"<<endl;
        

        // int mid = s + (e - s) / 2;
        int mid = (s + e) / 2;
        
        if (arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            s=mid+1;
        }else if(arr[mid]>key){
            e=mid-1;
        }
        
    }
    return -1;
}

int main(){

    int n;
    cout<<"Please enter the size of array"<<endl;
    cin>>n;

    int key;

    cout<<"Please enter the elements of array in ascending order"<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }

    cout<<"Please enter the key"<<endl;
    cin>>key;

    cout<<binarySearch(arr, n, key);


    return 0;
}

