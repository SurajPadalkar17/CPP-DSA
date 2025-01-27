#include <iostream>
using namespace std;

int main()
{
    char num = 2;
    cout << endl;
    switch (num)
    {
    case 1:
        cout << "First";
        break;
    case 2:
        cout << "Second";
        break;

    default:
        cout << "Its defaut case";
    }

    return 0;
}