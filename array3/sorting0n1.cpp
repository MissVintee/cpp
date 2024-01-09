#include<iostream>
#include<vector>
using namespace std;
void sort0n1(vector<int> &v){
    int n=v.size();
    int no0=0;
    int no1=0;
    //counting
    for (int i=0;i<n;i++){
        if(v[i]==0){
            no0++;
        }
        else no1++;
    }
    //filling
    for(int j=0;j<n;j++){
        if(j<no0){
            v[j]=0;
        }
        else v[j]=1;
    }
}
int main(){
    vector<int> v;
    cout<<"enter size: ";
    int n=v.size();
    cin>>n;
    cout<<"enter elements only 0's and 1's: ";
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        v.push_back(z);
    }
    sort0n1(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}