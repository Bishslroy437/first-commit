#include<iostream>
using namespace std;
class student
{
    protected:
    int roll;
    string name;
    public:
    student()
    {
        cout<<"enter the name";
        cin>>name;
        cout<<"enter the roll no.";
        cin>>roll;

    }
};

class sub:virtual public student
{
    protected:
    int s1,s2,s3;


    public:
    sub()
    {
        cout<<"enter s1 marks"<<endl;
        cin>>s1;
        cout<<"enter s2 marks"<<endl;
        cin>>s2;
        cout<<"enter s3 marks"<<endl;
        cin>>s3;


    }
};

class Cultural:virtual public student
{
    protected:
    int atten;
    public:
    Cultural()
    {
        cout<<"enter the cultural attendance"<<endl;
        cin>>atten;
    }
};

class detail:public sub, public Cultural
{
    int total;
    float avg;
    
    public:
    detail()
    {
        total=(s1+s2+s3);
        avg=(total/3);
        cout<<"name :"<<name<<endl;
        cout<<"roll no. :"<<roll<<endl;
        cout<<"enter attendance :"<<atten<<"%"<<endl;
        cout<<"total marks is :"<<total<<endl;
        cout<<"Average marks is :"<<avg<<"%"<<endl;


    }
};

int main()

{
    detail print;
}