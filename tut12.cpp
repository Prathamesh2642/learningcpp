#include<iostream>

using namespace std;

int main(){
    int a=3;
    int * b=&a;
    //&  ---> ampersand-->address of operator 
    cout<<"The address of a is : "<<b<<endl;
    cout<<"The address of a is : "<<&a<<endl;

    //* --->star -->value at operator(gives value stored in that pointer variable)
     cout<<"The value at b is : "<<*b<<endl;

//** --->pointer to pointer it stores the address of pointer variable
int** c=&b;
cout<<"The address of b is : "<<&b<<endl;
cout<<"The address of b is : "<<c<<endl;
cout<<"The value at b is : "<<*c<<endl;
cout<<"The value at b is : "<<**c<<endl;


    return 0;
}