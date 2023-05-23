#include<iostream>
#include<conio.h>
using namespace std;
class A{
int a,b,c;
public:
void input(){
    cout<<"Enter number";
    cin>>a>>b;
}
int swap(){

    c=a;
    a=b;
    b=c;
}
public:
void print(){
    input();
    swap();
    cout<<a<<b;
}

};
int main(){

    A a1;
    a1.print();
    return(0);
}