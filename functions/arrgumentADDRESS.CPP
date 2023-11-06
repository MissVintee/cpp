#include<iostream>
using namespace std;
 /* location or the address of x and y
   of both the functions are different */
   //scope of variables and understanding parameters

int a = 10; // GLOBAL VARIABLE --- declared globally
void fun(int x, int y) // FORMAL PARAMETERS
{
    cout <<"address of fun x " <<&x<<endl;
    cout <<"address of fun y " <<&x<<endl;
    cout<<" from void function " <<a <<endl ;
}

int main(){
    int x =2; // local variables --- only for a particual funtion
    int y =3;
    cout <<"address of main x " <<&x<<endl;
    cout <<"address of main y " <<&y<<endl;
    fun(x,y); // ACTUAL PARAMETERS
    cout<<a +20;
}