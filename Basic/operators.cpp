#include<iostream>
using namespace std;

int main(){
    //Ex1
    // int i=1;
    // int j=2;
    // int k;
    //     //1 //2 //1   //2   //3   //4
    // k = i + j + i++ + j++ + ++i + ++j;

    // cout<<i<<" "<<j<<" "<<k<<endl;
    
    //Ex2
    // int i = 0;
    // int k;
    //     //0   //0   //1   //1
    // k = i++ - --i + ++i - i--;
    // cout<<i<<endl;
    // cout<<k<<endl;
    
    //Ex3
    // int i=1,j=2,k=3;
    //         //1   //2   //3
    // int m = i-- - j-- - k--;

    // cout<<i<<endl; //0
    // cout<<j<<endl; //1
    // cout<<k<<endl; //2
    // cout<<m<<endl; //-4

    //Ex4

    int i=10, j=20, k;

        //10  //9   //19  //20  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl; //10
    cout<<j<<endl; //20
    cout<<k<<endl; //-20



    return 0;
}