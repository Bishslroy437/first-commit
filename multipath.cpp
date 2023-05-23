#include <iostream>
using namespace std;
  class  A
  {
    protected:
    int a;
    public:
    A()
    {
        a=9;
    }

  };

   class  B : virtual public A
  {
    protected:
    int b;
    public:
    B()
    {
        b=23;
    }

  };

   class  C : virtual public A
  {
    protected:
    int c;
    public:
    C()
    {
        c=25;
    }

  };

   class  D : public B , public C
  {
    protected:
    int d;
    public:
    D()
    {
        d=21;
        cout<<"a="<<a;
        cout<<"b="<<b;
        cout<<"c="<<c;
        cout<<"d="<<d;
    }

  };

  int void ()
  {
    a=0;
  }