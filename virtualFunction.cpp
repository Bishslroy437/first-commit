#include<iostream>
using namespace std;

class A
{
    protected:
    int x,y;

    public:
    virtual void input()
    {
        cout<<"enter the no :";
        cin>>x>>y;
    }
};

class B : public A 
{
    public:
    int z;
    void input()
    {
        cout<<"enter the no: ";
        cin>>z;
    }

    void show()
    {
        cout<<x<<y<<z;
    }
};

int main()
{
    A *p;
    *p->input();

    B b1;

    *p=&b1;

    p->input();
    p->show();

    return 0;
}