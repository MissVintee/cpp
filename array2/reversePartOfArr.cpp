#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    cout<<"Elements are: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int> &v){
    // reverse using while
    int i;
    cout<<"Enter first index: ";
    cin>>i;
    
    int j;
    cout<<"Enter second index: ";
    cin>>j;

    while(i<=j){
        int temp = v[i];
        v[i]= v[j];
        v[j]= temp;
        i++;
        j--;
    }

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
    reverse(v);    
    display(v);

}