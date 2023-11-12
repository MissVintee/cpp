#include<iostream>
using namespace std;
int main(){
     // SWAPING no. without using function nd pointers
    int a,b;
    cout<<"enter two numbers for swapping \n";
    cin>>a>>b;
    int temp;
    temp =a;
    a=b;
    b= temp;
    cout<<"1- swapping numbers : "<< a <<" " <<b <<endl; 

    // swapping using mathematical logic
    cout<<"2- swapping the above swapped numbers using math logic" <<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout <<a<<" "<<b;
}