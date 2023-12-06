//Exception in Constructor & Destructor -36	
#include <iostream>
using namespace std;
class A{
   public:
      A() {
         cout << "Construct an Object of A" << endl;
      }
      ~A() {
         cout << "Destruct an Object of A" << endl;
      }
};
class B{
   public:
      B() {
         int i =7;
         cout << "Construct an Object of B" << endl;
         throw i;
      }
      ~B() {
         cout << "Destruct an Object of B" << endl;
      }
};
int main() {
   try {
      A m1;
      B m2;
   } 
   catch(int i) {
      cout << "Caught " << i << endl;
   }
}