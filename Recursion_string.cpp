#include <iostream>
using namespace std;

void reverse(string & name, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(name[i], name[j]);
    i++;
    j--;
    reverse(name, i, j);
}

int main()
{

    string name = "suraj";
    reverse(name, 0, name.length()-1);
    cout << name;

    return 0;
}