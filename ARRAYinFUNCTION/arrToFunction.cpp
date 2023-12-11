#include<iostream>
using namespace std;
void change(int a[], int size){
    a[4]=11;
}
void print(int b[], int size){
    for (int i=0; i<size; i++){
        cout<<b[i]<<" ";
    }
}
int main(){
/* array uses pass by reference therefore 
we do not need to use ampercant or pointer */

int arr[]={1,3,5,7,9};
int size = sizeof(arr)/sizeof(arr[0]);
for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
cout<<endl << size<<endl;
change(arr, size);
print(arr, size);
}