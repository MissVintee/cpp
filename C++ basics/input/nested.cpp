// nested if else
#include<iostream>
using namespace std;
int main()

/* {
  int n;
  cout<<"Enter a number: ";
  cin >> n;
  if (n%3==0 || n%5==0){
    if(n%15!=0){
        cout<<"divisible by 5 OR 3";
    }
    else { cout<<"conditionally incorrect";}
  }
  else {cout<<"conditon not matched";}
} */

{
  int a,b,c;
  cout<< "Enter 1st number: ";
  cin >> a;
  cout<< "Enter 2nd number: ";
  cin >> b;
  cout<< "Enter 3rd number: ";
  cin >> c;
  if (a>b){
     if (a>c){ // a>c>b
        cout<<a<<" is greatest! ";
    }
    else { // c>a>b
        cout<<c<<" is greatest";
    }
  }
  else{ //b>a
    if (b>c){ //b>a
        cout<<b<<" is greatest";
    }
    else { //c>b>a
        cout<<c<<" is greatest";
    }
  }
}