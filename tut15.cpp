# include<iostream>
using namespace std;
//This is creating a function
int sum(int a,int b){
   int c=a+b;
   return c;
}
//FUNCTION PROTOTYPING-telling the compiler that sub function exists somewhere in the code please search before giving error
int sub(int a,int b); //also int sub(int, int ) can be writter

//function prototyping of void functions and also functions that dont take a value as parameters
void greet(void);

int main(){
int num1,num2;
greet();
cout<<"enter the number ";
cin>>num1;
cout<<"enter the number ";
cin>>num2;
cout<<"Sum of 2 numbers is "<<sum(num1,num2);
cout<<"\n Difference of 2 numbers is "<<sub(num1,num2);
    return 0;
}
/*This Function cannot be called as it is outside main function or it is defined after calling it,here property of function
prototyping comes into action*/
int sub(int a,int b){
    int c=a-b;
    return c;
}
void greet(){
    cout<<"Hello world \n";
}
