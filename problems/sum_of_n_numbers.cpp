#include<iostream>
using namespace std;

int sumof_n(int n){

   
   if(n==0) return 0;
    return n+sumof_n(n-1);
   
   
}



main(){
int n;
cin>>n;
cout<<sumof_n(n);
return 0;
}