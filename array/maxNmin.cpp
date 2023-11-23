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

    int min= arr[0];
    for (int j=1;j<=n-1;j++){
        if(min>arr[j]) min= arr[j];
    }
    cout<<"minimun value: "<<min<<endl;

    int max= arr[0];
    for(int i=1;i<=n-1;i++){
        if (max< arr[i]) max= arr[i];
    }
    
    int smax= arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]!=max && smax<arr[i]) smax= arr[i];
    }
    cout<<"maximum value: "<<max<<endl;
    cout<<"2nd maximum value: "<<smax;
}