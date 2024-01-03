#include<iostream>
#include<vector>
using namespace std;
/* void call(vector <int> &v){
} */
int main (){
vector<int> v;
v.push_back(9);
v.push_back(8);
v.push_back(1);
v.push_back(3);
v.push_back(5);
v.push_back(7);
v.push_back(9);
v.push_back(1);
v.push_back(2);
v.push_back(5);

int x=9;
int idx=-1;
/* for (int i =0; i< v.size();i++){
    if(v[i]==x) idx=i;
} 
cout<<idx; */
// time efficiency high
for (int i=v.size() - 1; i >=0;i++){
    if(v[i]==x) idx=i;
} 
cout<<idx;
}