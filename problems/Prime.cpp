#include<iostream>
using namespace std;


int prime(int num){
    for (int i = 2; i < num; i++)
    {
        if(num==1 || num==2){ cout<<"The number is Prime"<<endl; 
        return false;
        }
        
        else if (num%i==0)
        {
            /* code */   
            cout<<"The number is Composite"<<endl;
            return true;
        }
        else cout<<"The number is Prime"<<endl;
        
    }
    
}

main(){
cout<<"Enter the number:- "<<endl;
int num;
cin>>num;
int result=prime(num);
// cout<<result;
return 0;
}