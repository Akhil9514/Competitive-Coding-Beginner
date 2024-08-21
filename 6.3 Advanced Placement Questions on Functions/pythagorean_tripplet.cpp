#include<iostream>
#include<math.h>
using namespace std;

// float square(int x){
//     return x*x;
// }

// float sumOfSquare(int x, int y){
//     return square(x)+square(y);
// } 

// bool isPythagoreanTripplet(int x, int y, int z){

//     int a = max(x, max(y,z));
//     int b,c;

//     if(a==x){b=y;c=z;}
//     else if(a==y){b=x;c=z;}
//     else{a==z;b=x;c=y;}

//     if(square(a)==sumOfSquare(b,c)){
//         return true;
//     }else{
//         return false;
//     }


// }

// bool isPythagoreanTripplet(int x, int y, int z){

//     if((square(x)==sumOfSquare(y,z)) || (square(y)==sumOfSquare(x,z)) || square(z)==sumOfSquare(x,y)){
//         return true;
//     }else{
//         return false;
//     }


// }

bool isPythagoreanTripplet(int x, int y, int z){

    int a = max(x, max(y,z));
    int b,c;

    if(a==x){b=y;c=z;}
    else if(a==y){b=x;c=z;}
    else{a==z;b=x;c=y;}

    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }


}

int main(){

    float x,y,z;
    cin>>x>>y>>z;

    if(isPythagoreanTripplet(x,y,z)){
        cout<<"Pythagorean Tripplet";
    }
    else{
        cout<<"Not Pythagorean Tripplet";
    }

    return 0;
}