#include <iostream>
using namespace std;
void find(int n ,int *ptr1,int *ptr2){
    *ptr2= n%10;
    while (n>9)
    {
        n/=10;
    }
    *ptr1= n;
    return;
}
int main(){
    int n;
    cout <<"extracting first and last digit of a no."<<endl;
    cout<<"enter n- ";
    cin >>n;
    int fstdgt , lstdgt; //[firstdigit, lastdigit]
    int *ptr1= &fstdgt;
    int *ptr2= &lstdgt;
    find(n,ptr1,ptr2);
    cout<<fstdgt <<" "<<lstdgt;
}