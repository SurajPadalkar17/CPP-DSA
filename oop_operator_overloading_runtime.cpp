//compile time polymorphism
//fun and operator overloading
#include<iostream>
using namespace std;


class animal {
    public :
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class dog : public animal {
    public :
    void speak(){
        cout<<"Barking";
    }
};
int main(){
    dog d;
    d.speak();
    animal a;
    a.speak(); 
    
return 0;
}