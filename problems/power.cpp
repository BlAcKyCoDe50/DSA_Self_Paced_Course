#include<iostream>
using namespace std;

void power(int num,int p){
 int result=1;
 for (int i = 0; i < p; i++)
 {
    
    result=result*num;
 
 }
 cout<<"Answer:- "<<result<<endl;
 
  
    
}

main(){
// cout<<
int num,p;
cout<<"Enter the number:- "<<endl;
cin>>num;
cout<<"Enter the power:- "<<endl;
cin>>p;
power(num,p);
// int result=2^3;
// cout<<result;

return 0;
}