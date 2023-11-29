#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    double result;

    student()
    {
        cout<< "This is constructor"<<endl;
    }
    student(int a,double b)
    {
        roll=a;
        result=b;
    }
    void sum(student a,student b)
    {
        roll=a.roll+b.roll;
        result=a.result+b.result;
    }
    friend student st_c(student c);
    void display()
    {
        cout<<roll<<endl;
        cout<<result<<endl;
    }
};
student st_c(student c)
{
    return c;
}
int main()
{
    student obj;
    student obj2(33,3.50);
    student obj3(39,3.50);
    student obj4;
    obj4.sum(obj2,obj3);
    obj4.display();
    student obj5;
    obj5=st_c(obj2);
    obj5.display();
    return 0;
}
