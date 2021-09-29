#include<iostream>
using namespace std;

//normal syntax
struct employee{
    int id;
    char ch;
    float salary;

};

//using typedef
typedef struct book{
    int bookid;
    char c;
    int price;
}as;//name or alias can be anything

//union concept
union currency
{
    int rupee;
    char country;
    float dollar;
};

union money{
    int rice;
    char car;
    float pound;
};
//enum 
enum meal{breakfast,lunch,dinner}; //here meal has become a datatype here giving indices from 0 to n-1 to {elements}
//here breakfast becomes kind of subdatatype

int main(){
//normal syntax
struct employee prathamesh;
prathamesh.id=7;
prathamesh.ch='p';
prathamesh.salary=4400000;

for(int i=0;i<50;i++){
    cout<<"*";
}
cout<<endl;

cout<<prathamesh.id<<endl;
cout<<prathamesh.ch<<endl;
cout<<prathamesh.salary<<endl;

for(int i=0;i<50;i++){
    cout<<"*";
}
cout<<endl;

//using typedef
as qwerty;
qwerty.bookid=12;
qwerty.c='q';
qwerty.price=123;

cout<<qwerty.bookid<<endl;
cout<<qwerty.c<<endl;
cout<<qwerty.price<<endl;

for(int i=0;i<50;i++){
    cout<<"*";
}
cout<<endl;

union currency asd;
//asd.rupee=1;
//cout<<asd.rupee<<endl;
asd.rupee=73;
asd.country='o';
cout<<asd.rupee<<endl;

union money m1;
m1.rice=34;
m1.car='c';
cout<<m1.rice<<endl;

for(int i=0;i<50;i++){
cout<<"*";
}
cout<<endl;
//enum 
meal m3=breakfast;
cout<<m3<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;
for (int i=0;i<50;i++){
    cout<<"*";
}
    return 0;
}