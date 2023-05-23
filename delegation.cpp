#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll;
    public:
    Student()
    {
        cout<<"Enter Student Name :"<<endl;
        cin>>name;
        cout<<"Enter roll Number :"<<endl;
        cin>>roll;
    }
};
class Result
{
    public:
    int mark1,mark2,mark3,total;
    Student std;
    Result()
    {
        cout<<"mark1"<<endl;
        cin>>mark1;
        cout<<"mark2"<<endl;
        cin>>mark2;
        cout<<"mark3"<<endl;
        cin>>mark3;
        total=(mark1+mark2+mark3);
        cout<<total<<endl;
    }

    int display()
{
    if (total>=250)
    {
        cout<<"1st Division. 'A' .";
        if(total>=200)
        {
            cout<<"2nd Dvision. 'B' .";
            if(total>=150)
            {
                cout<<"3rd Division. 'C' .";
            }
        }
    }
    else
    {
        cout<<"Fail";
    }   
    return 0;
}
};
int main()
{
    Result rt;
    rt.display();
    return 0;
}