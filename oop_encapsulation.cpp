// encpsulation is the round up or wrapping of data member and data _FUNCTION
// it hides the data 
// read only data
//Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

// Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. Now,

// The finance section handles all the financial transactions and keeps records of all the data related to finance.
// Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
// Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.

// In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data.

// This is what Encapsulation is. Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”. 

// Two Important  property of Encapsulation 

// Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
// Information Hiding: Encapsulation hides the internal implementation details of a class from external code.
//  Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.

#include <iostream>
using namespace std;
class temp{
     int a;
  int b;
  public:
  int solve(int input){
    a=input;
    b=a/2;
    return b;
  }
};

int main() {
  int n;
  cin>>n;
  temp half;
  int ans=half.solve(n);
  cout<<ans<<endl;
   
}
