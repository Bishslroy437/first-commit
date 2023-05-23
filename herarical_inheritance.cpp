#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
    string nm;
    int cls;

public:
    int input()
    {
        cout << "enter name ,roll.class of  students";
        cin >> nm >> roll >> cls;
        return 0;
    }
};
class canteen : public student
{
public:
    int amt;


    void input()
    {
        cout << "enter amount";
        cin >> amt;
    }
    void input1()
    {
        cout << "enter amount";
        cin >> amt;
    }
    void print()
    {
        cout << "name=" << nm << "\n"
             << "roll="
             << "class="
             << "\n"
             << "cls"<< endl <<" amount = "<<amt;
    }
};
class transport : public student
{
    public:
    int tran_fee;


};
int main()
{
    canteen c;
    c.input();
    c.input();
    c.print();
    return 0;
}

// #include<iostream>
// using namespace std;
// class A
// {
// protected:
// int a,b;
// };
// int main()
// {
//     A a1;
//     a1.input(8);
//     return 0;
// }
// class B
// {
//    return (a+b);
// }