#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];

    //input -taking elements
    cout<<"ENTER ELEMENTS OF ARRAY: ";
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    //output -obtaining elements
    cout<<"following is the sum of array elements: ";
    int sum=0;
    for(int i=0 ;i<=n-1 ;i++){
        sum= sum+ arr[i];
        cout<<sum<<" ";
    }
    cout<<endl<<sum;
}