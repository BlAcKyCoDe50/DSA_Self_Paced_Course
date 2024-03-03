#include<iostream>
using namespace std;

void to_N(int n){
    if(n==0) return;
    cout<<n;
    to_N(n-1);
    // return 0;
}

main(){
// cout<<
int n;
cin>>n;
to_N(n);


return 0;
}