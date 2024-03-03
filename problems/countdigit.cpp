#include<iostream>
using namespace std;

int countDigit(int digit){
    int r=0;
    while (digit>0)         
    {
        digit=digit/10;
        r++;
    }
//    cout>>r;
    return r;
    
}


main(){
int digit;
cout<<"\nEnter the Digit:- ";
cin>>digit;
int result= countDigit(digit);
cout<<result;

return 0;
}