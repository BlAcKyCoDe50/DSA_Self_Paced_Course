#include<iostream>
using namespace std;


// int factors(int num) {
//     int factors;
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             factors=i;
//             cout << "Factors:- " << i << endl;
//         }
//         if(factors==1 || factors==2)
//          cout<<"Prime Factors are:- "<<factors;
        
//         for (int i = 2; i < num; i++)
//         {
//             if(factors%i==0){
//                 cout<<"Composite Factors"<<endl;
//             }
//             else{
//                 cout<<"Prime Factors are:- "<<factors<<endl;            }
//         }
        
//     }
//     return 0;
// }

void factors(int num) {
    cout << "Factors: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Prime Factors: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            int count = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            if (count == 2) {
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

main(){
cout<<"Enter the number:- "<<endl;
int num;
cin>>num;
factors(num);

return 0;
}