#include <iostream>
#include<vector>
using namespace std;
void sort0n1i(vector<int> &v){
    int n= v.size();
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }   
}
void sort0n1ii(vector<int> &v){
    int n= v.size();
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }   
}
void sort0n1iii(vector<int> &v){
    int n= v.size();
    int i=0;
    int j=n-1;
    while (i<j)
    {   if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;
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
    //sort0n1i (v);
    //sort0n1ii(v);
    sort0n1iii(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}