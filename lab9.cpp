#include<bits/stdc++.h>
using namespace std;
class Time{
    public:
    int hrs;
    int min;
    void get_time(int a,int b);
    void put_time();
    void sum_time(Time, Time);
};
void Time::get_time(int a,int b){
    hrs=a;
    min=b;
}
void Time::put_time(){
    cout<<"Time: "<<hrs<<":"<<min<<endl;
}
void Time::sum_time(Time a, Time b){
    hrs=a.hrs+b.hrs;
    min=a.min+b.min;
    hrs=hrs+min/60;
    min=min%60;
}

int main(){ 
    Time t1,t2,t3;
    t1.get_time(3,50);
    t2.get_time(4,40);
    t3.sum_time(t1,t2);
    t3.put_time();
    
    return 0;
}
