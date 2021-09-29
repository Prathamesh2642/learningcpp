#include<iostream>
using namespace std;
//basic method-this will not swap
void swap(int a,int b){
int temp=a;
a=b;
b=temp;
}
//method of call by reference(address)
void swappointer(int *a,int* b){
int temp1=*a;
*a=*b;
*b=temp1;
}    
//method of call by reference variable
void swapreferencevar(int &a,int &b){//due to &(ampersand) a and b is directly pointing towards address of x and y
    int temp2=a;  //hence we dont even have to use * anywhere as they are directly associated now
    a=b;
    b=temp2;
}
//method of return by reference
int & swaprefcall(int &a,int &b){//return type is pointing towards address of return variable
    int temp3=a;
    a=b;
    b=temp3;
    return a;
}
int main(){
int x=1,y=2;
int s=2,d=3;
int p=4,o=5;
cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;//initial values
swap(x,y);
cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;//does not swap
swappointer(&x,&y);
cout<<"Now they will swap"<<x<<" "<<y<<endl;//swapped
swapreferencevar(s,d);
cout<<"value of s is "<<s<<" and value of d is "<<d<<endl;//swapped
swaprefcall(p,o)=766;/*this shows that we are being returned a reference variable a i.e(&a)-reference
variables a which is a reference of p holds the value of 766 here, so &a=766 which is equal to or points to p,here it 
first got value of 5 from o let got assigned 766*/
cout<<"the value of p is "<<p<<" the value of o is"<<o<<endl;





    return 0;
}