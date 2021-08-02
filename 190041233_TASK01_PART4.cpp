#include <bits/stdc++.h>
using namespace std;
#define pi  acos(-1.0)
typedef long long ll;

class Shape
{
public:
Shape()
{
    cout<<"A Shape is created "<<endl;     ///As two and three dimension shape class is inheriting the base class so when an object is created it shows
                                            ///that a shape is created
}

};
class TwoDimensionalShape:public Shape {


protected:
float a1;
float p1;

TwoDimensionalShape():a1(0),p1(0){
cout<<"I am 2D shape"<<endl;   ///As all 2D classes like Triangle,Circle is Inheriting the 2D shape class so it shows that  "I am a 2D class";

}



};
class ThreeDimensionalShape:public Shape {
   protected:
   float a2;
    float p2;
    ThreeDimensionalShape():a2(0),p2(0){
        cout<<"I am 3D shape"<<endl;   ///Similarly all 3D classes are inheriting the 3D shape class so it shows " I am a 3D class";

    }

};

class square:public TwoDimensionalShape
{
private:

    float x;
public:
    void whoIam()
    {
        cout<<"I am a square"<<endl;
    }
    square(int a):x(a) {}

    float area()
    {   cout<<"Area is :";
        a1=x*x;
        return a1;
    }
    float perimeter()
    {   cout<<"Perimeter is:";
        return p1=4*x;
    }

};
class Triangle:public TwoDimensionalShape
{

private:
    float b,h,a,c;
public:
      void whoIam()
    {
        cout<<"I am a Triangle"<<endl;
    }
    Triangle(int a1,int b1,int c1,int w):a(a1),b(b1),c(c1),h(w) {}

    float area()
    {   cout<<"Area is :";
        a1=(0.5*b*h);
        return a1;
    }
    float perimeter()
    {   cout<<"Perimeter is:";
        return p1= (a+b+c);
    }


};
class Rectangle:public TwoDimensionalShape
{

private:

    float l,b;
public:
       void whoIam()
    {
        cout<<"I am a Rectangle"<<endl;
    }
    Rectangle(int q,int w):l(q),b(w) {}

    float area()
    {  cout<<"Area is :";
        return a1=l*b;
    }

    float perimeter()
    {   cout<<"Perimeter is:";
        return p1=2*(l+b);
    }



};
class circle:public TwoDimensionalShape
{
private:
    int r;
    public:
          void whoIam()
    {
        cout<<"I am a Circle"<<endl;
    }
    circle(int a):r(a){}
    float area()
    {   cout<<"Area is :";
        return a1=r*r;
    }
    float perimeter()
    {   cout<<"Perimeter is:";
        return p1=2*pi*r;
    }

};

class sphere:public ThreeDimensionalShape
{
private:
    int r,h;
    public:
          void whoIam()
    {
        cout<<"I am a sphere"<<endl;
    }
    sphere(int a):r(a) {}
    float area()
    {   cout<<"Area is :";
        return a2=(4*pi*r*r);
    }
    float volume()
    {    cout<<"Volume is:";
        return p2=(4*pi*r*r)/3;
    }

};
class cuboid:public ThreeDimensionalShape
{

private:
    int l,br,h;
public:
      void whoIam()
    {
        cout<<"I am a Cuboid"<<endl;
    }

    cuboid(int a,int b,int c):l(a),br(b),h(c) {}
    float area()
    {   cout<<"Area is :";
        return a2= 2*((l*br)+(br*h)+(l*h));
    }
    float volume()
    {     cout<<"Volume is:";
        return p2=4*(l+br+h);
    }
};
class cylinder:public ThreeDimensionalShape
{
private:
    int r,h;
public:
      void whoIam()
    {
        cout<<"I am a Cylinder"<<endl;
    }
    cylinder(int a,int b):r(a),h(b) {}
    float area()
    {   cout<<"Area is :";
        return a2=((2*pi*r*h)+(2*pi*r));
    }
    float volume()
    {     cout<<"Volume is:";
        return p2 =(pi*r*r*h);
    }

};
class cone:public ThreeDimensionalShape
{
private:
    int h,r;
public:
      void whoIam()
    {
        cout<<"I am a Cone"<<endl;
    }

    cone(int a,int b):h(a),r(b) {}
    float area()
    {   cout<<"Area is :";
        int p=r+sqrt(h*h+r*r);
        return a2=(pi*r*(p));
    }
    float volume()
    {     cout<<"Volume is:";
        return p2= ((pi*r*r*h)/3);
    }

};

int main()
{
    square a(5);
     a.whoIam();
    cout<<a.area()<<endl;
    cout<<a.perimeter()<<endl;
    Triangle b(1,2,3,4);
    b.whoIam();
      cout<<b.area()<<endl;
    cout<<b.perimeter()<<endl;
    Rectangle c(10,20);
    c.whoIam();
       cout<<c.area()<<endl;
    cout<<c.perimeter()<<endl;
    circle d (10);
    d.whoIam();
       cout<<d.area()<<endl;
    cout<<d.perimeter()<<endl;
    sphere e (12);
    e.whoIam();
     cout<<e.area()<<endl;
    cout<<e.volume()<<endl;
    cylinder f(13,15);
    f.whoIam();
       cout<<f.area()<<endl;
    cout<<f.volume()<<endl;
    cuboid g(11,12,13);
    g.whoIam();
           cout<<g.area()<<endl;
    cout<<g.volume()<<endl;

 cone h(10,12);
 g.whoIam();
 cout<<h.area()<<endl;
    cout<<h.volume()<<endl;

}
