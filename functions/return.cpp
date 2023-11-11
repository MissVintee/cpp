#include <iostream>
using namespace std;

// a function can contain more than one return statement
// but return value hit only single time .
int max3 (int a , int b, int c){
    if (a>b && a>c){
        return a;
    }
    else if( b>c && b>a){
        return b;
    }
    else return c;
}
int main(){
    int a=2 ,b=3, c=4 ;
    cout << max3(a,b,c) ;

}