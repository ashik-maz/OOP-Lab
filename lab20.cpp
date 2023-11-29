//Multilevel inheritance
#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"This is vehicle"<<endl;
    }
};
class fourwheler: public vehicle{
    public:
    fourwheler(){
    cout<<"four wheel"<<endl;}
};
class car: public fourwheler{
    public:
    car(){
        cout<<"car is fourwheler"<<endl;
    }
    
};
int main(){
    car c;
    return 0;
}