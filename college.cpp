#include<bits/stdc++.h>
using namespace std;
class Staff
{
   protected:
       int code;
       string name;   
   public:  
       Staff(int c, string n)
       {
            code=c;
            name=n;
       }
       void display()
       {
           cout<<"\n\nEmployee name: "<<name<<"\nEmployee code: "<<code;
       }
};
class Teacher: public Staff
{
   private:
       string subject, publication;
   public:
       Teacher(int c, string n,string subj, string pub):Staff(c,n)
       {
           subject=subj;
           publication=pub;
       }
       void display()
       {
           cout<<"\n\nTeachername: "<<name<<"\nTeacher code: "<<code<<"\nTeacher subject: "<<subject<<"\nTeacher publication: "<<publication;
       }

};
class Officer: public Staff
{
   private:
       string grade;  
   public:

       Officer(int c, string n,string gr):Staff(c,n)

       {;

           grade=gr;

       }
       void display()

       {

           cout<<"\n\nOfficer name: "<<name<<"\nOfficer code: "<<code<<"\nOfficer grade: "<<grade;
       }

};
class Typist: public Staff
{
   protected:
       int speed;
   public:
       Typist(int c, string n,int s):Staff(c,n)
       {
           speed=s;
       }
       void display()

       {
           cout<<"\n\nTypist code: "<<code<<"\nTypist name: "<<name<<"\nTypist speed: "<<speed;
       }
};
class Regular: public Typist
{
   public:
       Regular(int c, string n,int s):Typist(c,n,s)
       {          
       }
       void display()
       {
           cout<<"\n\nRegular typist code: "<<code<<"\nRegular typist name: "<<name<<"\nTypist speed: "<<speed;
       }
};
class Casual: public Typist

{
   private:
       int daily, wages;
   public:
       Casual(int c, string n,int s,int d, int w):Typist(c,n,s)
       {
           daily=d;
           wages=w;
       }
       void display()
       {
           cout<<"\n\nCasual typist code: "<<code<<"\nCasual typist name: "<<name<<"\nCasual typist speed: "<<speed<<"\nCasual typist daily words: "<<daily<<"\nCasual typist wages: "<<wages;
       }
};
int main()
{
    Staff staff1(101,"Sam");
    staff1.display();
    Teacher teacher1(102, "Harry", "English", "Oxford");
    teacher1.display();
    Officer officer1(103,"William","Senior");
    officer1.display();
    Typist typist1(104,"John",35);
    typist1.display();
    Regular regular1(105,"Brian",47);
    regular1.display();
    Casual casual1(106,"Danial",62,5200,20000);
    casual1.display(); 

return 0;
}