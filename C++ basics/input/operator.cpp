#include<iostream>
using namespace std;
int main()
{ 
/* 
  //relational operators ( <=, >=, >,<, == )
  int x=2;
  cout<<(x==4)<<endl; // value of x is compared
  cout <<( x<=3)<<'\n'; // less than equal to
  cout <<(x>=1); // greater than equal to
   */
/* 
     // assignment operators
     int y=6;
     cout<<(y=4)<<endl; // value is changed
     cout <<( y+= 6) <<endl;
     cout << (y-= 2)<<endl;
     cout << (y/= 2)<<'\n'; // divide
     cout << (y*= 2)<<'\n'; // multiplication
     cout << (y%= 2)<<endl; // modulus (remainder) 
*/

// boolean operators
 bool a=true;
 bool b=false;
 bool c=false;
 cout <<(a==b==c)<<endl; // left to right
 // T-F = false --> F-F = true --> 1
    int p=1;
    int q=3;
    int r=3;
    cout <<(p==q==r)<<endl;  // by default
// 1 & 3--> false(0) --> 0 & 3 --> false(0)
    cout <<( p==(q==r) )<<endl;
// 3 & 3 --> true(1) --> 1 & 1 -->true(1)
}