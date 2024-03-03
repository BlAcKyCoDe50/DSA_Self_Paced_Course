#include<iostream>
using namespace std;

void divisors(int num){
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            cout<<i;
        }

        
    }
    
}

main(){
cout<<"Enter the num:- "<<endl;
int num;
cin>>num;
divisors(num);
// cout<<"Divisors are:- "<<result<<endl;

return 0;
}