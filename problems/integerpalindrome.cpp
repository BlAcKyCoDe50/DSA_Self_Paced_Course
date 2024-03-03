#include<iostream>
using namespace std;

bool palindrome(int digit){
    int rev=0;
    int temp=digit;  //4553

    while (temp!=0)
    {
        int lastdigit=temp%10; //3
        rev=rev*10+lastdigit; //3
        temp=temp/10; 
    }


    return(rev==digit);
  
} 



main(){
cout<<"\nEnter the Digit:- ";
int digit;
cin>>digit;
bool result=palindrome(digit);
// cout<<result;
  if(result==0){
        cout<<"Number is not Plaindrome";
    }
    else{
        cout<<"Number is  Plaindrome";
    }

return 0;
}