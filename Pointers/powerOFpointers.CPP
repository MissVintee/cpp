#include<iostream>
using namespace std;
/*  
 // as we know both functions have their local variables so the values are passed
 // but their locations are not changed
void swap(int a, int b){
    int temp;
    temp =a;
    a=b;
    b= temp;
    return;
    // here the value are swapped but not the return values
}
int main(){
    //PASS BY VALUE
    int a,b;
    cout<<"enter two numbers for swapping \n";
    cin>>a>>b;
    swap(a,b); // the swapping is not performed,
    //the returns value collasped in the respective functions
    cout<<"1- swapping numbers : "<< a <<" " <<b <<endl;

}
 */

// PASS BY REFERENCE function is the application of pointers
void swap(int *p, int *q){
    int temp;
    temp =*p;
    *p = *q ;
    *q = temp;
    return;
}
int main(){
    //PASS BY VALUE
    int a,b;
    cout<<"enter two numbers for swapping \n";
    cin>>a>>b;
    swap( &a, &b); // int *p= &a , int *q= &b
    cout<<"Swapping numbers : "<< a <<" " <<b <<endl;
}