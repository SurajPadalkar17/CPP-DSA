#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int result(string* spp){

}

int main()
{
    string input;
    
    cin>>input;

    stringstream ts(input);\
    vector<string> spp;
    string letter;
    while(ts << letter){
        spp.push_back(letter);
    }
    
    string ans = result(spp);

    while(ts )


    

    return 0;
}