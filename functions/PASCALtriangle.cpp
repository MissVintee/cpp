#include<iostream>
using namespace std;
// function to calculate factorial

int fact(int x){
    int f = 1;
    for (int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}
//function to calculate combination or element of triangle
int combination(int i, int j){
    int iCj = fact(i)/(fact(j) * fact(i-j));
    return iCj;
}
//funtion to create the pascal triangle
int triangle(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            cout<< combination(i,j)<< " " ; //iCj
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
     // for (int i=0;i<=n;i++){
     //     for (int j=0;j<=i;j++){
     //        cout<< combination(i,j)<< " " ; //iCj
     //     }
     // cout<<endl;
     // }    
    
}