#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter the size of array: ";
    cin>>N;
    int arr[N];
    //input -taking elements
    cout<<"ENTER ELEMENTS OF ARRAY: ";
    for (int i=0;i<=5;i++){
        cin>>arr[i];
    }
    //output -obtaining elements
    cout<<"following are the array elements: ";
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
}
