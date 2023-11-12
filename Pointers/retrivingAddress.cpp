#include<iostream>
using namespace std;
int main(){
    cout<< "DATA TYPE AND ITS MEMORY SIZE" <<endl;
    cout <<"int : " << sizeof(int) <<endl;
    cout <<"float : " << sizeof(float) <<endl;
    cout <<"float128 : " << sizeof(__float128) <<endl;
    cout <<"bool : " << sizeof(bool) <<endl ;
    cout <<"char : " << sizeof(char) <<endl;
    cout <<"char16 : " <<  sizeof(char16_t) <<endl;
    cout <<"char32 : " << sizeof(char32_t) <<endl;
    cout <<"string : " << sizeof(string) <<endl;
    cout <<"long : " << sizeof(long) <<endl;
    cout <<"long long : " << sizeof(long long) <<endl;
    cout <<"double : " << sizeof(double) <<endl;
    /*  TILL DATE THE VARIABLES IN THE CODES WHICH WE HAD RUN GOT A RANDOM MEMORY SPACE IN THE STSYEM 
       THEREFOERE EACH TIME IT GETS A DIFFERENT MEMORY LOCATION  */
}