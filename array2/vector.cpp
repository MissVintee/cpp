#include<iostream>
#include<vector>    // to use vector
#include<algorithm> // to use sort
using namespace std;
int main(){
    // DECLARATION AND INITALISATION
    vector<int> v(4);
    // to add elements ONLY WHEN SIZE IS DEFINED
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    for (int i=0; i<v.size(); i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
    cout<<"SIZE: ";
    cout<< v.size() <<endl;
    cout<<"CAPACITY: ";
    cout<< v.capacity() <<endl;
    //v.push_back(11);
    v.push_back(7);
    //v.push_back(33);
    v.push_back(8);
    for (int i=0; i<v.size(); i++){
        cout<< v[i]<<" ";
    }

    cout<<endl;
    cout<< "size: "<< v.size() <<endl;
    cout<<"capacity: "<< v.capacity() <<endl;

    // TO ADD ELEMENTS 
    v.push_back(10);
    v.push_back(9);
    v.push_back(6);
    v.push_back(5);
    for (int i=0; i<v.size(); i++){
        cout<< v.at(i)<<" ";        // at operation used to update, access elements
    }
    cout<<endl;
    cout<<"HERE SIZE INCREASED AND BECAME EQUAL TO THE NUMBER OF ELEMENTES: ";
    cout<< v.size() <<endl;
    cout<<"AND CAPACITY IS DOUBLED: ";
    cout<< v.capacity() <<endl;

    sort(v.begin(), v.end());   // sorted the vector
    for (int i=0; i<v.size(); i++){
        cout<< v.at(i)<<" ";
    }
    cout<<endl<<"sorted\n";

    //to delete element (LAST)
    v.pop_back();
    for (int i=0; i<v.size(); i++){
        cout<< v.at(i)<<" ";
    }
    cout<<endl;

    v.push_back(0);
    // sort(v.begin(), v.end());   // sorted the vector
    for (int i=0; i<v.size(); i++){
        cout<< v.at(i)<<" ";
    }
    

}