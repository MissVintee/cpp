#include<iostream>
using namespace std;
// void fun(int x, int y){
//     cout << x<<" "<< y;
// }
// int main (){
//     int x =4;
//     int y=6;
//     fun(x,y);
// }

/* void fun(int x, int y){
    cout << x<<" "<< y;
}
int main (){
    fun(4,6);
} */

// void fun(int x=7, int y=8){ // default value of x is 7 and y is 8
//     cout << x<<" "<< y;
// }
// int main (){
//     fun();
// }

/* void fun(int x=7, int y=8){ // default value of x is 7 and y is 8
    cout << x<<" "<< y;
}
int main (){
    fun(4);
} */

// void fun(int x=7, int y=8){ // default value of x is 7 and y is 8
//     cout << x<<" "<< y;
// }
// int main (){
//     fun(4,6);
// }

//  void fun(int x=7, int y){ /* error: default argument missing for parameter 2 of 'void fun(int, int) .'*/
//     cout << x<<" "<< y;
//  }
//  int main (){
//     fun(6,8);
//  } //if u r defining default rrguments then define for all the arguments else don't for any.

// void fun(int x=5, float y=8.9){
//     cout << x<<" "<< y;
// }
// int main (){
//     fun(4.7); // converted to int
// }

void fun(int x, bool y= true){
    cout << x<<" "<< y;
}
int main (){
    fun(false); // one value is passed then it will go 1st argument only 
}