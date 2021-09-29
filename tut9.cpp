#include <iostream>
using namespace std;
int main(){
    //cout<<"How are you";
    int age;
    cout<<"please enter your age:"<<endl;
    cin>>age;
    //********if -else**********
    //if(age>18){
    //    cout<<"Party hard bro!";
    //}
    //    else{
    //        cout<<"You are not allowed,get out";
    //    }
    //*********if-else ladder********
    //if(age>18 && age<59){
    //   cout<<"Party hard bro"<<endl;
    //
    //   else if (age==18){
    //       cout<<"ask for parents permission"<<endl;
    //   }
    //   else if(age>59){
    //       cout<<"too old bruh"<<endl;
    //   }
    //   else{
    //       cout<<"get out"<<endl;

    //   }
//**********switch case statement**********
switch (age)
{
case 18:
        cout<<"18"<<endl;
        break;
case 22: 
        cout<<"22"<<endl;
        break;
case 9:
        cout<<"9"<<endl;
        break;
default:
    cout<<"get out";
    break;
}
    return 0;
}