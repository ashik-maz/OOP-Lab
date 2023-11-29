#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float result;
    void func(string x, int y, float z){
        name=x;
        roll=y;
        result=z;
    }
    void display(){
        cout<<"NAME:"<<name<<endl;
        cout<<"ROLL:"<<roll<<endl;
        cout<<"RESULT:"<<result<<endl;
    }
}; 
int main(){
    student Ashik;
    Ashik.func("Ashik",220101,3.75);
    Ashik.display();
}