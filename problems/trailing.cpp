#include<iostream>
using namespace std;

int factorial(int number){
    int result=1;
    for (int i = 1; i < number; i++)
    {
        result=result*(i+1);
        // result++;
    }
     return result;
    
    
}

int trailingzeroes(int result){
    int tz=result/5;
 

 
 
    return tz;
}


main(){
cout<<"\nEnter the number:- ";
int number;
cin>>number;
int result=factorial(number);
cout<<" The factorial of a number is:- "<<result;
int tz=trailingzeroes(number);
cout<<"\nTrailing zeroes in factorial of a number is:- "<<tz;
return 0;
}



