#include <iostream> 
#include <stdio.h>
using namespace std;

class Base {
public:
Base() {echo();}
virtual void echo() {printf("Base");}
};
  
class Derived:public Base {
public:
Derived() {echo();}
virtual void echo() {printf("Derived");}
};
  
int main() {
Base* base = new Derived();
system("pause");
//base->echo();
//return 0;
}
