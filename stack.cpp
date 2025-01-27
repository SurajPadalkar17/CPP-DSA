#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    //push operation
    s.push(2);
    s.push(3);

    cout<<s.top()<<endl;
    if(s.empty()){
        cout<<"empty stack"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    cout<<"Size of stack is "<<s.size();


return 0;
}


