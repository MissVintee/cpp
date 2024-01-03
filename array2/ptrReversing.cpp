#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    cout<<"Elements are: ";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
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
    display(v);

    // reverse using while
    int i=0;
    int j=v.size() -1-i;
    while(i<=j){
        int temp = v[i];
        v[i]= v[j];
        v[j]= temp;
        i++;
        j--;
    }
    display(v);

    //reversing using for loop
    for(int i=0,j=v.size()-1 ; i<=j ; i++,j--){
       int temp = v[i];
        v[i]= v[j];
        v[j]= temp;
    }

    display(v);
}