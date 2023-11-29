//Encapsulation
#include<iostream>
using namespace std;
class student
{
private:
    double CGPA;
public :
    student(double x):CGPA(x){}
    double getdata()
    {
        return CGPA;
    }
    double putdata()
    {
        cout<<CGPA;
    }
};
int main()
{
    student s1(3.25);
    s1.getdata();
    s1.putdata();
    return 0;
}
