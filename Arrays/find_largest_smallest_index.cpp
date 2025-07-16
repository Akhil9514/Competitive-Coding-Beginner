#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[]={5,15,22,1,-5,-24};
    int size = 6;

    int smallest_index = 0;
    int largest_index = 0;
    int smallest_num = arr[0];

    for(int i=0; i<size; i++){

        if(arr[i]<smallest_num){
            smallest_index = i;
        }else if(arr[i]>largest_index){
            largest_index = i;
        }

    }

    cout<<"smallest index is "<<smallest_index<<endl;
    cout<<"largest index is "<<largest_index<<endl;

}