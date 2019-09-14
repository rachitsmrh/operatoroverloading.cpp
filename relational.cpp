#include<iostream>
using namespace std;
class distanc
{
private:
int feet;
int inches;
public:
    distanc(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void change()
    {
        feet=feet+feet/12;
        inches=inches%!2;
    }
    bool operator >(distanc d)
    {
        if(inches<12)
        if(feet>d.feet)
        {
            return true;
        }

        if(feet==d.feet&&inches>d.inches)
        {
            return true;
        }
        return false;
        else
        {
            feet=feet+(inches/12);

        }
    }

};
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    distanc d1(a,b),d2(c,d);
    d1.change();
    d2.change();
      if(d1>(d2))
    {
        cout<<"d1 is greater than d2"<<endl;
    }
    else
    {
        cout<<"d1 is less than d2"<<endl;
    }

}

