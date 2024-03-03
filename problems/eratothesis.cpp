#include<iostream>
using namespace std;

void eratothesis(int num){
    
    cout<<"Fixed Prime numebers are:- 1 & 2"<<endl;
    for (int i = 2; i < num; i++)
    {
        if(i%2==0 || i%3==0){}
        else{
            cout<<"Prime numbers are:- "<<i<<endl;
        }    
        }
    }
    



main(){
cout<<"Enter the num:- "<<endl;
int num;
cin>>num;
eratothesis(num);

return 0;
}