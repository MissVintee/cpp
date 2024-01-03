#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        v.push_back(x);
    }

    int t;
    cout<<"Enter target number: ";
    cin>>t;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]==t){
                cout<<"("<<i<<","<<j<<") ";
                cout<<"- "<<v[i]<<"+"<<v[j]<<endl;
            }
        }
    }
}