// MULTIPLE CONTIDIONS
#include<iostream>
using namespace std;
int main()
/* { // 3 DIGIT NO.S
    int n ;
    cout << "enter a number: ";
    cin >> n;
    if (n>=100 && n<=999) // multiple contion
    {cout << "a 3 digit number";}
    else{ cout << "not a 3 digit number!";}
} */



{
    int p,q,r;
    cout << "enter three numbers: ";
    cin>>p>>q>>r;
    if (p>q && p>r )
    {cout <<p ;}
    if  (q>p && q>r)
    { cout <<q ;}
    if (r>q && r>p)
    { cout <<r ;}
}