#include<iostream>
using namespace std;
class complex
{
private:
    int x,y;
public:
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    complex()
    {

    }
    complex operator +(complex c)
    {
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    complex operator-()
    {

        complex temp;
        temp.x=-x;
        temp.y=-y;
        return temp;
    }
    complex operator++(int)
    {
        complex temp;
        temp.x=x++;
        temp.y=y++;
        return temp;
    }
     complex operator++()
    {
        complex temp;
        temp.x=++x;
        temp.y=++y;
        return temp;
    }

    void showdata()
    {
        cout<<"\nx="<<x<<"  y="<<y;
    }
};
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    complex c1(a,b),c2(c,d),c3;
    //c3=c1.operator +(c2);
    c3=c1+c2;
    c3.showdata();
    c3=-c1;
    c3.showdata();
    c3=-c2;
    c3.showdata();
    c3=c1++;
    c3.showdata();
    c1.showdata();
    c3=++c2;
    c3.showdata();
    c2.showdata();

}

