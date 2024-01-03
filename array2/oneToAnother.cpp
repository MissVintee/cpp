#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    cout<<"Elements are: ";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int> a;
    
    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        a.push_back(x);
    }
    display(a);
    cout<<endl;

    cout<<"Reversing Vector\n";
    vector<int> b(a.size());
    for(int i=0; i<a.size(); i++){
        int j= n-(1+i);
        b[j]=a[i];
    }
    display(b);
}