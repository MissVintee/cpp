// logical and &&, logical or ||
{ 
    int a ;
    cout << "enter  a number: ";
    cin>> a;
    if ((a%5==0 || a%3==0) && a%15!=0)
    {cout << "divisible by 5 or 3 but not 15";}
    else{cout<<" Not matching the conditions";}
} 