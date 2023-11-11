#include<iostream>
using namespace std;
 /* location or the address of x and y
   of both the functions are different */
   //scope of variables and understanding parameters

int a = 10; // GLOBAL VARIABLE --- declared globally
void f(){
    cout<<a;
}
void fun(int x, int y) // FORMAL PARAMETERS
{
    cout <<"address of fun x " <<&x<<endl;
    cout <<"address of fun y " <<&y<<endl;
    cout<<"from void function: " <<a <<endl ;
}

int main(){
    int x =2; // local variables --- only for a particual funtion
    int y =3;
    cout <<"address of main x " <<&x<<endl;
    cout <<"address of main y " <<&y<<endl;
    fun(x,y); // ACTUAL PARAMETERS

    // cout<<a +20 << endl;
    // int a = 2;  // redefining variables
    // cout <<a+20 <<endl;

    // this will not work if you uncomment above 3 code of lines
    a = 3 ; // setting global variable again
    f();
}