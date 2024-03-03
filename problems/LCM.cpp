#include<iostream>
using namespace std;
// #include<O_GCD.cpp>

int GCD(int num1,int num2){
    if(num2==0){
        return num1;
    }

    return GCD(num2,num1%num2);  //gcd(a,b)=gcd(b,a%b)
}

int LCM(int num1,int num2){
    return (num1*num2)/GCD(num1,num2);
}


main(){

int a,b;
cout<<"\nEnter the num1:- ";
cin>>a;
cout<<"Enter the num2:- ";
cin>>b;
int result=GCD(a,b);
cout<<"The GCD of the number is:- "<<result<<endl;
int lcm=LCM(a,b);
cout<<"The LCM of two numbers is:- "<<lcm<<endl;

// cout<<

return 0;
}