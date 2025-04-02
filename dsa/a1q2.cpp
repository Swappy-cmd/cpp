#include<iostream>
using namespace std;
int main(){
    float pencil,pen,eraser,total,gst;
    cout<<"cost of pencil:";
    cin>>pencil;
    cout<<"cost of pen:";
    cin>>pen;
    cout<<"cost of eraser:";
    cin>>eraser;
    total=pencil+pen+eraser;
    cout<<"bill\n total cost of all material:"<<total;
    gst=total*.18;
    cout<<"gst is:"<<gst<<"\ntotal bill with gst:"<<gst+total;
    return 0;
}