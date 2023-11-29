#include<bits/stdc++.h>
using namespace std;
class shape{
    public:
    void area(double r);
    void area(double a, double b);
    void area(double a, float b);
};
void shape::area(double r)
{
    cout<<"Aria of circle: "<<3.1416*r*r<<endl;
}
void shape::area(double a,double b)
{
    cout<<"Aria of Rectangle: "<<a*b<<endl;
}
void shape::area(double a,float b)
{
    cout<<"Aria of triangle: "<<0.5*a*b<<endl;
}

int main(){ 
    int cs;
    double a,b;
    float c;
    cout<<"Choich your shape"<<endl<<"1-circle"<<endl<<"2-rectriangle"<<endl<<"3-triangle"<<endl;
    cin>>cs;
    if(cs==1)
    {
        cout<<"Enter Radius: ";
        cin>>a;
        shape circle;
        circle.area(a);
    }
    if(cs==2)
    {
        cout<<"Enter length and width: ";
        cin>>a>>b;
        shape rect;
        rect.area(a,b);
    }
    
    if(cs==3)
    {
        cout<<"Enter base and height: ";
        cin>>b>>c;
        shape triangle;
        triangle.area(b,c);
    } 
    return 0;
}
