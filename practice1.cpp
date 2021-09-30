#include<iostream>
using namespace std;
int main(){
int hour=0,min=0,sec=0,vids,secsum=0,minsum=0;
cout<<"Enter the number of vids:"<<endl;
cin>>vids;

for(int i=0;i<vids;i++){
cout<<"Enter minutes"<<endl;
cin>>min;
if(min>=60){
    cout<<"enter valid details";
    cout<<"enter minutes"<<endl;
cin>>min;
}
cout<<"Enter seconds"<<endl;
cin>>sec;
if(sec>=60){
    cout<<"enter valid details";
    cout<<"enter seconds"<<endl;
cin>>sec;
}
secsum=secsum+sec;
minsum=minsum+min;
if(secsum>=60){
    minsum=minsum+1;
    secsum=secsum%60;
}
if(minsum>=60){
    hour=hour+1;
    minsum=minsum%60;
}
}
cout<<hour<<":"<<minsum<<":"<<secsum;


    return 0;
}
