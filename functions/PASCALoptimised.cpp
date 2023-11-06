#include<iostream>
using namespace std;
//optimising the previous pascal triangle to manage the the time complexcity

/* in this program the factorial is not needed 
our program will have two values -current value and -next value ..
the next value depends on the current value'
the first row of the triangle is always one thus-
the very first current value is set too one --- [nC0 =1]
 */

//funtion to create the pascal triangle
int triangle(int n){
    for (int i=0;i<=n;i++){
        int curr = 1;   //current value
        for (int j=0;j<=i;j++){
            cout << curr <<" ";
            curr = curr * (i-j) / (j+1) ;  //next value
        }
    cout<<endl;
    }
}
int main(){
    int n;
    cout<<" PRINTING PASCAL TRIANGLE \n";
    cout<<"enter number : ";
    cin>>n;
    triangle(n);
   
}