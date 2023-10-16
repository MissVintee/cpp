#include<iostream>
using namespace std;
int main()
// { // yhi sbse shi hai
//     int a,d,n,l;
//     cout << " CALCULATE YOUR AP! \n";
//     cout<<"Enter 1st number: ";
//     cin>>a;
//     cout << "Enter common difference: ";
//     cin>>d;
//     cout << "Enter number of digits: ";
//     cin>>n;
//     for (int i =1; i <=l; i+=d){
//         if (l=a+(n-1)* d){
//             cout<< i << " ";
//         }
//         else cout<<" nhi pta nikal ";
//     }
// }

 {   int n;
    cin >> n;   
    int a=100;
    for (int i=1;i<=n;i++){
        cout <<a<< endl;
        a=a-3;
    // for (int a = 100;a>0; a=a-3){
        //cout<<a<<endl;}
    }

}

/* { // GP
    int a,r,n;
    cout << "calculate GP! \n";
    cout << "Enter 1st number: ";
    cin>>a;
    cout << "Enter number of digits: ";
    cin>>n;
    cout << "Enter common ratio: ";
    cin >> r;
    for (int i=1; i<=n ; i++){
        cout <<a<< " ";
        a=a * r;
    }
} */