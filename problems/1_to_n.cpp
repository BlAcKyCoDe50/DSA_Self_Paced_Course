#include<iostream>
using namespace std;

void to_n(int n){
    if(n==0) return;
    cout<<n<<endl;
    to_n(n-1);
    
}

main(){
// cout<<
int n;
cin>>n;
to_n(n);

return 0;
}