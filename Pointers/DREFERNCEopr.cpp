#include<iostream>
using namespace std;
// introducing pointers
void f(){
    int x =2;
    int* p = &x;
    float y =4.9;
    float* q=&y; 
    // value of p= address of x
    // value of q= address of y
    // we are storing the values
    cout<<&x <<endl;
    cout<< p<<endl;
    cout <<&y <<endl;
    cout<<q <<endl;
}
// dereferenc operater * p
int main(){
    int x = 102;
    int* p= &x;
    cout << x <<endl;
    *p = 21;
    cout <<x <<endl;
    f();
}
