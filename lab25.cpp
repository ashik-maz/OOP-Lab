//Function overriding and Runtime polymorphism
#include<iostream>
using namespace std;
class base{
    public:
    int id, reg; string name;
    base(){
        cout<<"This is constructor of base class."<<endl;
    }
    base(int x, string y):id(x),name(y){
        cout<<"My name is "<<name<<endl<<"ID:"<<id<<endl;
    }

    void myinfo(string name){
        this -> name=name;
        cout<<"My name is : "<<name<<endl;
    }
    void myinfo(int reg){
        this-> reg=reg;
        cout<<"My regestration Number is:"<<reg<<endl;
    }
};
class Derived : public base
{
    int reg;
public:
    void myinfo(int reg)
    {
        this->reg=reg;
        cout<<"My regestration is:  "<<reg<<endl;
    }
};

int main()
{
    base obj(220119,"Ashik");
    Derived obj2;
    obj.myinfo("Md Ashikuzzaman Ashik");
    obj.myinfo(1011961);
    obj2.myinfo(1011943);
   return 0;
}