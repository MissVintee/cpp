#include<iostream>
using namespace std;

int startriangle(int x){
    for (int i=1;i<=x;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
int main(){
    int x;
    cin>> x;
    startriangle(x);
    startriangle(x+=1);
    startriangle(x+=2);
}