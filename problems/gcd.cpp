#include<iostream>
using namespace std;

int gcd(int a,int b){
    int gcd,GCD;
    for (int i = 1; i <= a && i<=b; ++i)
    {
        
       if (a%i==0 && b%i==0)
       {
        
        gcd=i;
       }
       int previous=0;
        previous=gcd;
        if (gcd>previous)
        {
            GCD=gcd;
        }
        
        
       cout<<GCD;
       return 0;
       
    }
    
}
main(){
int a,b;
cout<<"\nEnter the num1:- ";
cin>>a;
cout<<"Enter the num2:- ";
cin>>b;
int result=gcd(a,b);
cout<<"The GCD of the number is:- "<<result;


return 0;
}