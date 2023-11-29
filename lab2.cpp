#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    student(string x, int y){
        name=x;
        roll=y;
    }
    //void display();
    ~student(){
        cout<<"Name: "<<name<<endl<<"Roll:"<<roll<<endl;
    }
};
// void student::display(){
//     cout<<"Name: "<<name<<endl<<"Roll:"<<roll<<endl;
// }
int main(){
    student s1("shanto",220222);
    //s1.display();
    student s2("Ashik",220119);
    //s2.display();
    return 0;
}