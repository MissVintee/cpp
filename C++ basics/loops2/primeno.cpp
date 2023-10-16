#include<iostream>
using namespace std;
int main()
   { int n;
    cout<<"ENTER A NO: ";
    cin >> n;
    bool flag = true; // means prime
    for(int i =2;i <=n-1;i++){
        if (n%i==0){
            flag = false;
            cout<<i<<endl;
        }
    }
    if (n==1) cout<< "neither prime nor composite";
    else if (flag==true) cout<<n<<" is prime";
    else cout<<n<<" is compostie";
   }