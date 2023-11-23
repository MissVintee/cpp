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
    
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH\n";
    cin>>x;
    //output -obtaining elements

   /*  cout<<"searching array elements: ";
    for(int i=0 ;i<=n-1 ;i++){
        if (arr[i]==x)
        {
            cout<<"element found, hurray!";
            break;
        } else{
            cout<<"element not found";
            break;
        }   
    } */

    //FIXING BUG
    cout<<"searching array element\n";
    // CHECK MARK USING BOOL
    bool flag = false; //bydefault VALUE
    for(int i=0 ;i<=n-1 ;i++){
        if (arr[i]==x)
        {
            flag= true;
        }
    }
    if(flag== true){
        cout<<"Element found, hurray!";
    }else{
        cout<<"Element not found";
    }
}