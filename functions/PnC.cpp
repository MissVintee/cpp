#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for (int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}

int permutation(int n, int r){
    int nPr= fact(n)/fact(n-r);
    return nPr;
}

int combination(int n, int r){
    int nCr = fact(n)/(fact(r) * fact(n-r));
    return nCr;
}

int main(){
    int n;
    cout <<"enter n: ";
    cin>>n;
    int r;
    cout <<"enter r: ";
    cin>>r;
    // int nfact =1;
    // for (int i=2;i<=n;i++){ //n!
    //     nfact *=i;
    // }
    // int rfact =1;
    // for (int i=2;i<=r;i++){ //r!
    //     rfact *=i;
    // }
    // int nrfact =1;
    // for (int i=2;i<=n-r;i++){ // n-r !
    //     nrfact *=i;
    // }
    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n-r);
    
    // int nCr = nfact/(rfact*nrfact);
    // cout<<nCr<<endl;
    //int nPr = nfact/(nrfact);
    // cout<<nPr<<endl;

    int nPr = permutation(n,r);
    cout<<"Permutation = " << nPr<<endl;
    int nCr = combination(n,r);
    cout<<"Combination = " << nCr;
}