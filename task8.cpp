#include <iostream> 
#include <stdio.h>
using namespace std;

class Base {
public:
Base() {echo();}
virtual void echo() {printf("Base\n");}
~Base(){printf("B\n");}
};
  
class Derived:public Base {
public:
Derived() {echo();}
virtual void echo() {printf("Derived\n");}
~Derived(){printf("D\n");}
};
  
int main() {
Base* base = new Derived();
//base->echo();
delete(base);
return 0;
}
