#include <iostream>
using namespace std;//This -> stores the address of object used for  to resolve ambiguity 
//when a parameter has the same name as a class attribute.

class Hero
{
    public:
  Hero() {
    cout<<"Constructor Called";
  }
    

};

int main()
{
    // object crete statically
    Hero ramesh;

    //object create dynamicaly
    Hero *b = new Hero;


    return 0;
}