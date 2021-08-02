#include <bits/stdc++.h>
using namespace std;
#define pi  acos(-1.0)
typedef long long ll;

class Shape
{
public:
Shape()
{
    cout<<"A Shape is created "<<endl;
}

};
class TwoDimensionalShape:public Shape {


protected:
float a1;
float p1;
TwoDimensionalShape():a1(0),p1(0){}



};
class ThreeDimensional:public Shape {
   protected:
   float a2;
    float p2;
    ThreeDimensional():a2(0),p2(0){}

};

class square:public TwoDimensionalShape
{
private:

    float x;
public:

    square(int a):x(a) {}

    float area()
    {  cout<<"Area is :";
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

    Triangle(int a1,int b1,int c1,int w):a(a1),b(b1),c(c1),h(w) {}

    float area()
    {    cout<<"Area is :";
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

    Rectangle(int q,int w):l(q),b(w) {}

    float area()
    {   cout<<"Area is :";
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

    circle(int a):r(a){}
    float area()
    {   cout<<"Area is :";
        return a1=r*r;
    }
    float perimeter()
    {    cout<<"Perimeter is:";
        return p1=2*pi*r;
    }

};

class sphere:public ThreeDimensional
{
private:
    int r,h;
    public:

    sphere(int a):r(a) {}
    float area()
    {   cout<<"Area is :";
        return a2=(4*pi*r*r);
    }
    float volume()
    {   cout<<"Volume is:";
        return p2=(4*pi*r*r)/3;
    }

};
class cuboid:public ThreeDimensional
{

private:
    int l,br,h;
public:

    cuboid(int a,int b,int c):l(a),br(b),h(c) {}
    float area()
    {   cout<<"Area is :";
        return a2= 2*((l*br)+(br*h)+(l*h));
    }
    float volume()
    {   cout<<"Volume is:";
        return p2=4*(l+br+h);
    }
};
class cylinder:public ThreeDimensional
{
private:
    int r,h;
public:

    cylinder(int a,int b):r(a),h(b) {}
    float area()
    {   cout<<"Area is :";
        return a2=((2*pi*r*h)+(2*pi*r));
    }
    float volume()
    {   cout<<"Volume is:";
        return p2 =(pi*r*r*h);
    }

};
class cone:public ThreeDimensional
{
private:
    int h,r;
public:



    cone(int a,int b):h(a),r(b) {}
    float area()
    {   cout<<"Area is :";
        int p=r+sqrt(h*h+r*r);
        return a2=(pi*r*(p));
    }
    float volume()
    {    cout<<"Volume is:";
        return p2= ((pi*r*r*h)/3);
    }

};


