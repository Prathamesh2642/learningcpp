# include<iostream>
using namespace std;
int glo=6;
void sum(){
  int a=9;
  cout<<glo<<"\n";
}
int main(){
  // int a=14;
   //int b=15;
   int a=15,b=15;/*recommended to write like this to keep the program  clean,
   variables of same datatype should be initialized together*/
   float pi=3.14;
   char ch='a';
   int glo=9;
   cout<<"\n"<<glo;
   glo=0;
     cout<<"\n"<<glo;
   sum();
   cout<<"this is tutorial 4"<<". Here is the value of a "<<a<<",and value of b is "<<b<<".";
    cout<<"The value of pi is "<<pi;
    cout<<"\nthe character is "<<ch;
    cout<<"\n"<<glo;
    bool o=false;
    cout<<"\n"<<o;
    return 0;
}