#include <iostream>
using namespace std;
//to remove ambugity we need scope resolution operator
//obj.A::func();
//obj.B::func();

class animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking";
    }
};
class human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speking"<<endl;
    }
};


// multiple inheritance

class hybrid : public animal, public human
{
    
};

int main()
{
    hybrid d;
    d.speak();
    d.bark();

    return 0;
}