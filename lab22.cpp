//Hybrid inheritance
#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"I am Ashik"<<endl;
    }
};
class id{
    public:
    id(){
        cout<<"My id is 220119"<<endl;
    }
};
class address: public student{
    public:
    address(){
    cout<<"Kushtia"<<endl;}
};
class identity: public student,public id{};
int main(){
    identity ash;
    address ashik;

    return 0;
}