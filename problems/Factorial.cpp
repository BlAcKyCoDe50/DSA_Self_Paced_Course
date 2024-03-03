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


main(){
cout<<"\nEnter the number:- ";
int number;
cin>>number;
int result=factorial(number);
cout<<result;

return 0;
}



