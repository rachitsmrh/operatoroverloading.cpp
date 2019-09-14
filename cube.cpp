#include<iostream>
using namespace std;
class cube
{
private:
   double l,b,h;
public:
    cube(double length,double breadth,double height)
    {
        l=length;
        b=breadth;
        h=height;
    }
    cube()
    {

    }
    cube operator +(cube c)
    { cube temp;
        temp.l=l+c.l;
        temp.b=b+c.b;
        temp.h=h+c.h;
        return temp;

    }
    void showdata()
    {
        double volume;
        volume=l*b*h;
        cout<<"\nvolume:"<<volume<<endl;
    }

};
int main()
{
    double length,breadth,height,len1,bread1,height1;
    cin>>length>>breadth>>height>>len1>>bread1>>height1;
    cube c1(length,breadth,height),c2(len1,bread1,height1),c3;
    c1.showdata();
    c2.showdata();
    c3=c1+c2;
    c3.showdata();
}
