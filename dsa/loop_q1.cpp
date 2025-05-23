#include<iostream>
using namespace std;

//question 1

// int main(){
//     int i,num,fact=1;
//     cout<<"enter number :";
//     cin>>num;

//     for (i=1;i<=num;i++){
//         fact*=i;
//     }
//     cout<<"factorial is :"<<fact;
//     return 0;
// }

//questions 2

// int main(){
//     int num,i;
//     cout<<"enter number:";
//     cin>>num;
//     for (i=0;i<=num;i++){
//         cout<<num<<"x"<<i<<"="<<num*i<<endl;
//     }
//     return 0;
// }

//question 3 palindrome

int main(){
    int num,original,rev=0;
    cout<<"enter number:";
    cin>>num;
    original=num;
    while(num>0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    cout<<rev<<endl;
    if (rev==original){
        cout<<"number is palindrome";
    }else{
        cout<<"number is NOT palindrome";
    }
    return 0;
}