// private data member of any class cannot be inheritance
// superclass mmode of inheritance  access ans
// public public pub
// pub pri pri
// pub pro pro
// pro pro pro
// pro pun pro
//pro  pri pri
// pri any not accesiblee here
#include<iostream>
using namespace std;

class human{
    public :
    int height;
    int weight;
    int age;

    int getage(){
        return this -> age;

    }
    int setweight (int w){
        this -> weight = w;

    }
};
class male : public human{
    public :
    string color;
    void sleep (){
        cout<<"Male seeping"<<endl;
    }
};
int main(){
    male ob1;
    ob1.setweight(21);
    cout<< ob1.age<<endl;
    cout<< ob1.weight<<endl;
    cout<< ob1.height<<endl;

    
    ob1.weight;
    ob1.sleep();



return 0;
}