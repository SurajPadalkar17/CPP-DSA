#include<iostream>
using namespace std;

class animal {
    public :
    int age ;
    int weight ;
    public :
    void speak(){
        cout<<"Speaking"<<endl;

    }    
   
    void setage (int w){
        this -> age = w;

    }
};

class dog : public animal{
    public :
    int get(){
        return this ->age ;

    }
};

int main(){
    dog d ;
    d.speak();
    d.setage(10);
    cout<<d.age<<endl;  
    cout<<d.get()<<endl;


return 0;
}