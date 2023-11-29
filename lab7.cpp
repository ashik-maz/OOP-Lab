#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
    string name;
    int roll,mark[10];
    void get_data();
    void put_data();
};
void student :: get_data()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<< "Enter roll: ";
    cin >> roll;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter mark for subject " <<i+1<< ": ";
        cin>>mark[i];
    }
}

void student :: put_data()
{
    cout << "\n Student details = " << endl;
    cout<<"Student name: "<<name << endl;
    cout<< "roll: "<<roll<<endl;
    int total=0;
    for(int i = 0 ; i < 5 ; i++)
        total += mark[i];
        float avg = total / 5.0;
        cout<<"Total mark = " <<total<< endl;
        cout<< "Average = " << avg << endl;
}
int main()
{
    cout<<  "Student details using array within class"<<endl;
    student s[50];
    int n,i;
    cout<< "Enter number student = ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        s[i].get_data();
        s[i].put_data();
    }
    return 0;
}
