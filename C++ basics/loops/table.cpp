#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" GET YOUR TABLE! \n";
    cout << "enter a number: ";
    cin >> n;
    cout <<" here is the table- \n";
    for (int i=n; i<=(n*10); i+=n ){
        cout<< i << endl;
    }
}