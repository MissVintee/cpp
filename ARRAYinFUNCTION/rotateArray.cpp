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

void reverse(int i, int j, vector<int> &v){

    while(i<=j){
        int temp = v[i];
        v[i]= v[j];
        v[j]= temp;
        i++;
        j--;
    }
}

void rotate(vector<int> &v){
    int k;
    cout<<"Enter key value: ";
    cin>>k;
    reverse(0, v.size()-k-1, v);    //part before key value - 1234
    reverse(v.size()-k, v.size()-1, v);     //part from key value - 567
    // 4321 765
    reverse(0,v.size()-1, v);   //final revering result in rotation
    // 5671234

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
    rotate(v);    
    display(v);
}