//C++ program to write and read object using read and write function-39.
#include <bits/stdc++.h>
using namespace std;
class student
{
    private:
        string name;
        int age;
    public:
        void getdata(void)
        { cout<<"Enter name:"; cin>>name;
          cout<<"Enter age:"; cin>>age;
        }
 
        void showdata(void)
        {
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
}; 
int main()
{
    student s;   
    ofstream student_data;
    student_data.open("aaa.txt");
    if(!student_data)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"\nFile created successfully."<<endl;
    s.getdata();
    student_data.write((char*)&s,sizeof(s)); 
    student_data.close(); 
    cout<<"\nFile saved and closed succesfully."<<endl;
//file.write((char*)&object,sizeof(object))
    ifstream file_student;
    file_student.open("aaa.txt",ios::in);
    if(!file_student){
        cout<<"Error in opening file..";
        return 0;
    }
    file_student.read((char*)&s,sizeof(s));
    s.showdata();
    file_student.close(); 
    return 0;
}
