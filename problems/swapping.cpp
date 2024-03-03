#include<iostream>
using namespace std;
main(){
int a,b,temp;
a=8;
b=1;
cout<<"Before swap the value of a "<<a<<" and value of b "<<b;
temp=a;
a=b;
b=temp;
// a=b;
cout<<"\nAfter Swap the value of a "<<a;
cout<<"\nAfter swpap the value of b "<<b;


return 0;
}