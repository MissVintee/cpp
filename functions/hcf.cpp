#include<iostream>
using namespace std;
//calculating greatest common divisior or hcf
/* 
int gcd(int a , int b){
    int gcd =1;
    for ( int i= 1; i<=min(a,b);i++){
        if(a%i ==0 && b%i == 0){ //common factor
            gcd =i;
        }
    }
    return gcd;
} */

int hcf(int a , int b){
    int hcf =1;
    for ( int i= min(a,b); i>=1;i--){
        if(a%i ==0 && b%i == 0){ //common factor
            hcf =i;
            break; // hcf hota hai last me (highest value hoti hai) to break 
        }
    }
    return hcf;
}

int main(){
    cout <<"HCF CALCULATOR" <<endl;
    int a;
    cout <<"enter a : ";
    cin>> a;
    int b;
    cout<<"enter b : ";
    cin>> b;
    cout<< hcf(a,b);
    // cout<< gcd(a,b);   
}