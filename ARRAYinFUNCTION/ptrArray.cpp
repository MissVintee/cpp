#include <iostream>
using namespace std;
int main(){
    char arr[]= {'$','2','a','z'};
    cout<<"array size: "<<sizeof(arr) <<endl;
    /* cout<<arr <<endl;
     here the array gets the location every time
    thus creating pointer help us to fix the variable lcation */

    // char *ptr = &arr[0];  same as below
    char *ptr = arr;  
    cout<<ptr<<endl;
    cout<<arr <<endl;
    // cout<<&arr <<endl;  WRONG
    cout<< &arr[0] <<endl;
    cout<< "printing output: ";
    for (char i=0; i<=3; i++){
        cout<<ptr[i]<<" ";     // here we get that ptr is acting like arr only
    }
    cout<<endl; // <<"Size of Array: "<<sizeof(ptr) <<endl;
    cout<< "updating item- ";
    ptr[0]= '@'; //*ptr = '@'
    cout<<"[$ to @] :"<<ptr[0]<<endl;

    //another way to update elements
    *ptr= '&';
    ptr++;  // 2 a z ♦ 2nd item is not updated yet
    *ptr='0'; //0 a z ♦ Here the last element is not known and 1st have moved
    ptr--; // & 0 a z The first element is back
    //cout<<ptr<<endl;
    //cout<<"array size changed: "<<sizeof(ptr);

    cout<<"Another way to ACCESS ELEMENTES: \n";
    int size= sizeof(arr)/1; // sizeof(arr[0])= 1 bit
    for (char j=0; j<size-1; j++){
        cout<< *ptr<<" ";
        ptr++;      // here after last item arr size is increased and became 4 
    }
    cout<<ptr <<endl;
    cout<<"array size : "<<sizeof(ptr) <<endl;

    ptr=arr;
    cout<< "printing output: ";
    for (char i=0; i<size; i++){
        cout<<i[ptr]<<" ";     // here we get that ptr is acting like arr only
    }
    /* assigning pointer to an array makes pointer capable of
    performing task like retriving elements, taking input, updating, printing output */
}