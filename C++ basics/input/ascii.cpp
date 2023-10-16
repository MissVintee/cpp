#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout<<"Enter character: "<<endl;
 cin>>ch;
 int x = (int)ch;
 cout<<"ASCII value of character is "<< x <<endl;
 cout<<x-64; // FOR CAPITAL LETTERS 
  //(int) is typecasting
}

/* {
    // int, char, float, boolean ---> typecasting 
  float f = 8.2;
  int i = (int)f;  // or int a = f
  cout<<i << endl;
    
    bool a = true; // true = 1
    bool b = false; // false = 0
    cout<< a+9<< endl;
    cout <<b+9<< endl;
    cout <<(char)true; // smiley
} */
