#include<iostream>
using namespace std;
int main(){
// ptr address testing for int type
//4 bytes add ups
    int x=5;
    int *ptr =&x;
    cout<< "address of int type-"<<endl;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;

// ptr address testing and oprs for bool type
//1 bytes add ups
    bool flag=true;
    bool *p= &flag;
    cout<<"address of bool type-"<<endl;
    cout<<p<<endl;
    p++; // increment and decrement opr is possible for ptrs.
    cout<< p<<endl;

//*ptr oprs
    float y=1.2;
    float *q=&y;
    cout<<q<<" "<<*q<<endl;
     //*q =*q+1;
    (*q)++; // y++
    cout<<q <<" "<<*q<<endl;

//question
    int a=15;
    int *pt= &a;
    int b= (*pt)++; // pehle value b ko milegi phir a ki value increment hogi
    cout<<a<<" "<<b <<endl; 
    b= ++(*pt); // pehle value increment hogi phir b ko milegi
    cout<<a<<" "<<b;
}