#include<iostream>
using namespace std;
int main(){
int marks[]={12,13,14};
int mmarks[3]={12,13,14};
int mmmarks[]={};
mmmarks[1]=13;
mmmarks[2]=14;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<mmarks[0]<<endl;
cout<<mmarks[1]<<endl;
cout<<mmarks[2]<<endl;
cout<<mmmarks[0]<<endl;
cout<<mmmarks[1]<<endl;
cout<<mmmarks[2]<<endl;

for(int i=0;i<3;i++) {
cout<<"marks of student "<<i<<" is "<<marks[i]<<endl;
}
int i=0;
while(i<3){
    cout<<"marks of student "<<i<<" is "<<marks[i]<<endl;
    i++;
}
int j=0;
do{
cout<<"marks of student "<<j<<" is "<<marks[j]<<endl;
j++;
}while(j<3);

for(int h=0;h<20;h++){
cout<<"*";
}
cout<<endl;
int* p=marks;
cout<<*p<<endl;
cout<<*p+1<<endl;
cout<<*p+2<<endl;
    return 0;
}