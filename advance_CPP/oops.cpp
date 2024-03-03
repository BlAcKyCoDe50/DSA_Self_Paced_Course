#include<iostream>
#include<string>
// #include<class.cpp>
using namespace std;
class Hero{
 private:
 int health;
 
 public:
    // int health;
    char level;
    int power;
    int gethealth(){
    return health;            //topics:- padding and greedy alignment
 }



 
};
 

 main(){
// cout<<
string st="hello";
Hero Blacky;   
 //1 byte allocated

//Dynamically Allocation:- 
Hero *h1= new Hero();
cout<<h1->gethealth();


cout<<Blacky.gethealth();  //solve the error
Blacky.level='A';
Blacky.power=100;
// cout<<Blacky.gethealth;





return 0;
}