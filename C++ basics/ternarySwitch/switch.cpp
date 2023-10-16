#include<iostream>
using  namespace std;
int main()
/* { int d; // days
    cout << " enter from 1 to 7: ";
    cin >> d; // day number
    switch (d)
    {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday" ;break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday" ;break;
        default: cout << " wrong entry"; break;
    }
} */

/* switch (expression)
{
case 
    break;

default:
    break;
}
*/

{ // calculator
    int a,b;
    char op;
    cout << " Enter the problem: ";
    cin >> a >>op >> b;
    switch (op)
    {
    case '+':
     cout << a+b;
        break;
    case '-':
     cout << a-b;
        break;
    case '/': 
     cout << a/b;
        break;
    case '*': 
     cout << a*b;
        break;
   // case "%": 
      //[ never use double invertes comma for char i.e "+"]
      //[ nerver use single inverted comma to print sentences in cout]
       //cout << a%b;
       // break;
    
    }
}