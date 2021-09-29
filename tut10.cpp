#include<iostream>

using namespace std;

int main(){
//loops in c++
//**********for loops***********
//for(int i=0;i<=30;i++){
//cout<<i<<endl;
//}


//infinite loop
//for(int i=0;i=true;){
//cout<<i;
//}
//****for loop*****
/*syntax
for(initialization;condition;updation){
    body
}
*/
//*******while loop******
/* syntax 
initializiation
while(condition){
body
updation
}
*/
//int i=0;
//while(i<=10)
//{
//cout<<i<<endl;
//i++;
//}

//******do-while loop*******
/*syntax
initialization
do{
    loop body
    updation
}while(condition)
*/
//int i=0;
//do{
//    cout<<i<<endl;
//    i++;
//}while(i<=10);

//EXERCISE-PRINT TABLE OF 6 USING ALL 3 LOOPS
for(int i=1;i<=10;i++){
    cout<<"6 x "<<i<<" = "<<6*i<<endl;
}
 for (int i=1;i<=20;i++){
     cout<<"-";
 }
 cout<<endl;

int i=1;
while(i<=10){
    cout<<"6 x "<<i<<" = "<<6*i<<endl;
    i++;
    }
int j=1;
while(j<=20){
    cout<<"-";
    j++;
}
cout<<endl;

int k=1;
do{
    cout<<"6 x "<<k<<" = "<<6*k<<endl;
    k++;
}while(k<=10);

int l=1;
do{
    cout<<"-";
    l++;
}while(l<=20);

    return 0;
}