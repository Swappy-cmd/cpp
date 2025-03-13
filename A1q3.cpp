#include<iostream>
using namespace std;
int main(){
    //simple interest calculator 
    float P,R,T;
    cout<<"principal:";
    cin>>P;
    cout<<"rate:";
    cin>>R;
    cout<<"time:";
    cin>>T;
    cout<<"simple interst:"<<(P*R*T)/100;

    return 0;
}